#include <stdio.h>

int main() {
    int n, digit, count = 0, remainder;

    // Input the number and the digit to search
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    // Loop through each digit of the number
    for (; n != 0; n /= 10) {
        remainder = n % 10; // Extract the last digit
        if (remainder == digit) {
            count++; // Increment count if it matches the target digit
        }
    }

    // Output the result
    printf("The digit %d appears %d times.\n", digit, count);

    return 0;
}
