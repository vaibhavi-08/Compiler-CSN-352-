/* grammar.y */

%{
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cstring> // Required for strdup

using namespace std;

// Existing symbol table and other declarations
extern unordered_map<string, string> symtab;
extern vector<string> program;
extern vector<pair<string, int>> error;
extern int line;
extern bool iserror;



extern unordered_map<string, string> new_symtab;

// current Type declaration
string currentType = "";
bool toextend=false;
int yylex();
void yyerror(const char *s);
string syntaxerror="";
void add_to_token_table(string token, string type);

%}

%union { // Define the union for token values. Add necessary types.
    int ival;       // Integer value
    char *sval;    // String value (e.g., for identifiers)
    // You might need other types depending on your grammar (e.g., float, double)
}

%token <sval> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID BOOL
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <sval> primary_expression postfix_expression argument_expression_list unary_expression
%type <sval> cast_expression multiplicative_expression additive_expression shift_expression
%type <sval> relational_expression equality_expression and_expression exclusive_or_expression
%type <sval> inclusive_or_expression logical_and_expression logical_or_expression conditional_expression
%type <sval> assignment_expression constant_expression expression declaration
%type <sval> declaration_specifiers init_declarator_list init_declarator storage_class_specifier
%type <sval> type_specifier struct_or_union_specifier struct_or_union struct_declaration_list
%type <sval> struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator
%type <sval> enum_specifier enumerator_list enumerator type_qualifier declarator direct_declarator
%type <sval> pointer type_qualifier_list parameter_type_list parameter_list parameter_declaration
%type <sval> identifier_list type_name abstract_declarator direct_abstract_declarator initializer
%type <sval> initializer_list statement labeled_statement compound_statement declaration_list
%type <sval> statement_list expression_statement selection_statement iteration_statement
%type <sval> jump_statement translation_unit external_declaration function_definition assignment_operator

%start translation_unit

%%

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
    : '&' 
    | '*' 
    | '+' 
    | '-' 
    | '~' 
    | '!'
    ;


cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' inclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
    : '='           { $$ = "="; /* No change to currentType */ }
    | MUL_ASSIGN    { $$ = "*="; /* No change to currentType */ }
    | DIV_ASSIGN    { $$ = "/="; /* No change to currentType */ }
    | MOD_ASSIGN    { $$ = "%="; currentType = "INT"; } // Modulo typically results in an integer
    | ADD_ASSIGN    { $$ = "+="; /* No change to currentType */ }
    | SUB_ASSIGN    { $$ = "-="; /* No change to currentType */ }
    | LEFT_ASSIGN   { $$ = "<<="; currentType = "INT"; } // Bit shifting typically results in an integer
    | RIGHT_ASSIGN  { $$ = ">>="; currentType = "INT"; } // Bit shifting typically results in an integer
    | AND_ASSIGN    { $$ = "&="; currentType = "INT"; } // Bitwise AND typically results in an integer
    | XOR_ASSIGN    { $$ = "^="; currentType = "INT"; } // Bitwise XOR typically results in an integer
    | OR_ASSIGN     { $$ = "|="; currentType = "INT"; } // Bitwise OR typically results in an integer
    ;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier 
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF 
	| EXTERN  
	| STATIC {currentType="STATIC"; $$="STATIC";toextend=true;}
	| AUTO {currentType="AUTO"; $$="AUTO";toextend=true;}
	| REGISTER 
	;

type_specifier
	: VOID   { if(toextend){currentType += " VOID";}else{currentType="VOID";}toextend=false; $$="VOID"; }
	| CHAR   { if(toextend){currentType += " CHAR";}else{currentType = "CHAR";} toextend=false;$$= "CHAR";}
	| SHORT  { if(toextend){currentType += " SHORT";}else{currentType = "SHORT";} toextend=false;$$="SHORT";}
	| INT    { if(toextend){currentType += " INT";}else{currentType = "INT";}toextend=false; $$="INT";}
	| LONG   { if(toextend){currentType += " LONG";}else{currentType = "LONG";} toextend=false;$$="LONG";}
	| FLOAT  { if(toextend){currentType += " FLOAT";}else{currentType = "FLOAT";} toextend=false;$$="FLOAT";}
	| DOUBLE { if(toextend){currentType += " DOUBLE";}else{currentType = "DOUBLE";} toextend=false;$$="DOUBLE";}
	| SIGNED { if(toextend){currentType += " SIGNED";}else{currentType = "SIGNED";toextend=true;} $$="SIGNED";}
	| UNSIGNED { if(toextend){currentType += " UNSIGNED";}else{currentType = "UNSIGNED";toextend=true;} $$="UNSIGNED";}
	| struct_or_union_specifier { toextend=false;  } // Simplified, you might want to handle this more specifically
	| enum_specifier {  toextend=false;} // Simplified, you might want to handle this more specifically
	| TYPE_NAME { currentType = "TYPE_NAME"; $$="TYPE_NAME";toextend=false;} // You might want to handle this differently depending on your needs
	;


struct_or_union_specifier
    : struct_or_union IDENTIFIER '{' struct_declaration_list '}'
        {
            currentType = string($1) + " " + string($2); // Set currentType to "struct Point" or "union Point"
            add_to_token_table($2, $1);           // Add "Point" as a struct or union to the symbol table
        }
	| struct_or_union '{' struct_declaration_list '}' 
	   {
		 
	   }
    | struct_or_union IDENTIFIER
        {
            currentType = string($1) + " " + string($2); // Handle forward declaration of structs/unions
			add_to_token_table($2,$1);
        }
    ;


struct_or_union
    : STRUCT  { $$ = "struct"; } // Return "struct" for STRUCT tokens
    | UNION   { $$ = "union"; }  // Return "union" for UNION tokens
    ;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
    : ENUM '{' enumerator_list '}'
      {
        currentType = "ENUM";
        $$ = strdup("ENUM");
      }
    | ENUM IDENTIFIER '{' enumerator_list '}'
      {
        std::string enumType = "enum " + std::string($2);
        currentType = enumType.c_str();
        $$ = strdup(enumType.c_str());
        add_to_token_table($2, "enum");

      }
    | ENUM IDENTIFIER
      {
        std::string enumType = "enum " + std::string($2);
        currentType = enumType.c_str();
        $$ = strdup(enumType.c_str());
        add_to_token_table($2, "enum");
      }
    ;


enumerator_list
    : enumerator
    | enumerator_list ',' enumerator
    ;

enumerator
    : IDENTIFIER
      
    | IDENTIFIER '=' constant_expression
      
    ;


type_qualifier
	: CONST {currentType="const"; toextend=true;}
	| VOLATILE {currentType="volatile"; toextend=true;}
	;

declarator
	: pointer direct_declarator {add_to_token_table($2,currentType); currentType=""; toextend=false;}
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER { 
		add_to_token_table($1, currentType);toextend=false;
		$$ = $1; // Propagate the identifier up the parse tree
	}
	| '(' declarator ')' { $$ = $2; }
	| direct_declarator '[' constant_expression ']' { 
		// For array types, you might want to append [] to the type
		string arrayType = currentType + "[]";toextend=false;
		add_to_token_table($1, arrayType);
		$$ = $1;
	}
	| direct_declarator '[' ']' {
		string arrayType = currentType + "[]";toextend=false;
		add_to_token_table($1, arrayType);
		$$ = $1;
	}
	| direct_declarator '(' parameter_type_list ')' {
		// For function types, you might want to handle this differently
		string funcType = "procedure";toextend=false;
		add_to_token_table($1, funcType);
		$$ = $1;
	}
	| direct_declarator '(' identifier_list ')' {
		string funcType = currentType + " function";toextend=false;
		add_to_token_table($1, funcType);
		$$ = $1;
	}
	| direct_declarator '(' ')' {
		string funcType = currentType + " function";toextend=false;
		add_to_token_table($1, funcType);
		$$ = $1;
	}
	;


pointer
	: '*' {currentType+='*';}
	| '*' type_qualifier_list
	| '*' pointer { 
            currentType+='*';
        }
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;

parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%

#include <iostream>
#include <fstream>

extern FILE *yyin;
extern int yyparse();

void yyerror(const char *s) {
    extern int line;
    fprintf(stderr, "Error: %s at line %d\n", s, line);
	syntaxerror="ERROR: ";
	syntaxerror+=s;
	syntaxerror+="at line ";
	syntaxerror += std::to_string(line);

}

// Define the global variables here
bool iserror = false;
int line = 1;
vector<pair<string, int>> error;
unordered_map<string, string> symtab;
vector<string> program;

// Define the new symbol table

unordered_map<string, string> new_symtab;

void add_to_token_table(string token, string type) {
    new_symtab[token] = type;
}

int main(int argc, char *argv[]) {
    string inputFileName, outputFileName;

    // Parsing command-line arguments
    for (int i = 1; i < argc; i++) {
        if (string(argv[i]) == "-i" && i + 1 < argc) {
            inputFileName = argv[i + 1];
            i++; // Skip next argument
        } else if (string(argv[i]) == "-o" && i + 1 < argc) {
            outputFileName = argv[i + 1];
            i++; // Skip next argument
        }
    }

    // Check if both input and output files are specified
    if (inputFileName.empty() || outputFileName.empty()) {
        cerr << "Usage: " << argv[0] << " -i <input_file> -o <output_file>\n";
        return 1;
    }

    FILE *inputFile = fopen(inputFileName.c_str(), "r");
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    yyin = inputFile;  // Set yyin to read from the file
    if (yyparse() == 0) {
         cout << "Parsing successful!" << endl;
    } else {
        cerr << "Parsing failed!" << endl;
		outputFile << "Parsing Failed!" << endl;
		outputFile << syntaxerror << endl;
    }
       // Check if there are errors
    if (!error.empty()) {
        outputFile << "Errors Found:\n";
        for (const auto &err : error) {
             if(err.first!="unterminated comment")outputFile << "invalid character : " << err.first << " at line no. " << err.second << endl;
            else outputFile  << err.first << " at line no. " << err.second << endl;
        }
    } 
	else {
		/*
        outputFile << "Original Symbol Table:\n";
        outputFile << "-------------------------------------------------------------------------------\n";
        outputFile << "| Lexeme                                | Token                                 |\n";
        outputFile << "-------------------------------------------------------------------------------\n";

        for (const auto &entry : symtab) {
            std::stringstream tokenStream(entry.first);
            std::string line;
            bool firstLine = true;
            while (std::getline(tokenStream, line, '\n')) {
                if (firstLine) {
                    outputFile << "| " << setw(36) << left << line
                               << " | " << setw(36) << left << entry.second << " |\n";
                    firstLine = false;
                } else {
                    outputFile << "| " << setw(36) << left << line
                               << " | " << setw(36) << left << "" << " |\n";
                }
            }
        }
        outputFile << "-------------------------------------------------------------------------------\n";
        outputFile << '\n';
		*/
		
		outputFile << "\nNew Symbol Table (Tokens and Types):\n";
		outputFile << "-------------------------------------------------------------------------------\n";
		outputFile << "| Token                                 | Type                                  |\n";
		outputFile << "-------------------------------------------------------------------------------\n";

		for (const auto &entry : new_symtab) {
			outputFile << "| " << setw(36) << left << entry.first
					<< " | " << setw(36) << left << entry.second << "|\n";
		}

		outputFile << "-------------------------------------------------------------------------------\n";
		outputFile << '\n';
		outputFile << "whole program after separation:\n";
		for (const auto &i : program) {
			outputFile << "|" << i << "|\n";
		}
		
    }

    fclose(inputFile);
    outputFile.close();

    cout << "Lexical analysis completed. Check '" << outputFileName << "' for results." << endl;

    return 0;
}