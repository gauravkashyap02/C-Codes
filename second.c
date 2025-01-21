#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter first number (num1): ");
    scanf("%d", &num1);
    printf("Enter second number (num2): ");
    scanf("%d", &num2);

    // Ensuring num1 is less than num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Printing the multiplication tables
    for (int i = num1; i <= num2; i++) {
        printf("Multiplication Table of %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

