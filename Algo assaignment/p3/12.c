#include <stdio.h>

int main() {
    double a, b, result;
    int choice;

    printf("Enter two real numbers (a and b): ");
    scanf("%lf %lf", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division (quotient)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result of addition: %.2lf\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result of subtraction: %.2lf\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result of multiplication: %.2lf\n", result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result of division (quotient): %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
    }

    return 0;
}

