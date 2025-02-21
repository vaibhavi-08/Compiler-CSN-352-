

struct Node {
    char *data;
    struct Node *next;
};

void append_node(struct Node **head, char *data);
void print_list(struct Node *head);
void free_list(struct Node *head);
int count_words(char *line);

int main() {
    char line[MAX_LINE_LENGTH];
    struct Node *head = NULL;
    int total_words = 0;
    int line_count = 0;

    

    printf("File contents:\n");
    print_list(head);

    printf("\nTotal lines: %d\n", line_count);
    printf("Total words: %d\n", total_words);
    printf("Average words per line: %.2f\n", (float)total_words / line_count);

    free_list(head);

    return 0;
}

void append_node(struct Node **head, char *data) {
    struct Node *new_node ;
    if (*head == NULL) {
        *head = new_node;
    } else {
        struct Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void print_list(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%s\n", current->data);
        current = current->next;
    }
}

void free_list(struct Node *head) {
    struct Node *current = head;
    struct Node *next;
    while (current != NULL) {
        next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
}

int count_words(char *line) {
    int count = 0;
    char *token = strtok(line, " \t");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t");
    }
    return count;
}
