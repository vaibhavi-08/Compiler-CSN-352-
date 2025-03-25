void counterFunction() {
    static int count = 0; // Retains its value between function calls
    count++;
    printf("count = %d\n", count);
}

int main() {
    printf("Testing static variable:\n");

    counterFunction();  // count = 1
    counterFunction();  // count = 2
    counterFunction();  // count = 3

    return 0;
    
}