// Declare function for output
void print_int(int x) {
    // Placeholder function to simulate printing integers
}

int main() {
    int i = 1;  // Loop control variable

    // While loop with variable declared inside the loop body
    while (i <= 5) {
        int square = i * i;  // Variable declared inside the loop
        print_int(square);   // Expected output: 1, 4, 9, 16, 25 (each on a new line or sequentially)
        i = i + 1;           // Increment the loop control variable
    }

    return 0;
}
