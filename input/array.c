int main() {
    int numbers[5] = {1, 2, 3, 4, 5}; // array declaration and initialization
    int c=0;
    int x=c+numbers[0];
    int sum = 0;
    int i;
    //printf("Array elements:\n");
    for ( i = 0; i < 5; i++) {
        //printf("numbers[%d] = %d\n", i, numbers[i]);
        sum = sum + numbers[i];

        
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}