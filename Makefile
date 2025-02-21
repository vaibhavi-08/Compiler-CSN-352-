# Makefile

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -g

# Source directories
SRC_DIR = src
TEST_DIR = test

# Executable name
TARGET = parser

# Objects
OBJS = $(SRC_DIR)/lex.yy.o $(SRC_DIR)/grammar.tab.o

# Lexer and parser source files
LEXER = $(SRC_DIR)/lexer.l
GRAMMAR = $(SRC_DIR)/grammar.y

# Default target
all: $(TARGET)

# Create the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(SRC_DIR)/$(TARGET)

# Generate grammar.tab.h and grammar.tab.c
$(SRC_DIR)/grammar.tab.c $(SRC_DIR)/grammar.tab.h: $(GRAMMAR)
    bison -d -Wno-other $(GRAMMAR) -o $(SRC_DIR)/grammar.tab.c


# Compile parser source
$(SRC_DIR)/grammar.tab.o: $(SRC_DIR)/grammar.tab.c
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/grammar.tab.c -o $(SRC_DIR)/grammar.tab.o

# Generate and compile lexer source
$(SRC_DIR)/lex.yy.c: $(LEXER)
	flex -o$(SRC_DIR)/lex.yy.c $(LEXER)

$(SRC_DIR)/lex.yy.o: $(SRC_DIR)/lex.yy.c $(SRC_DIR)/grammar.tab.h
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/lex.yy.c -o $(SRC_DIR)/lex.yy.o

# Clean target
clean:
	rm -f $(SRC_DIR)/$(TARGET) $(OBJS) $(SRC_DIR)/lex.yy.c $(SRC_DIR)/grammar.tab.c $(SRC_DIR)/grammar.tab.h

# Phony targets
.PHONY: all clean
