#include <stdio.h>

int main() {
    double a, b, result;
    int choice, caseChoice;

    printf("Enter two real numbers (a and b): ");
    scanf("%lf %lf", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
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
                printf("Choose a case for division:\n");
                printf("1. Evaluate quotient\n");
                printf("2. Evaluate remainder\n");
                printf("Enter your choice (1-2): ");
                scanf("%d", &caseChoice);

                if (caseChoice == 1) {
                    result = a / b;
                    printf("Result of division (quotient): %.2lf\n", result);
                } else if (caseChoice == 2) {
                    result = fmod(a, b);
                    printf("Result of division (remainder): %.2lf\n", result);
                } else {
                    printf("Invalid case choice. Please choose 1 or 2.\n");
                }
            } else {
                printf("Error: Divisor is zero\n");
            }
            break;
        default:
            printf("Invalid choice. Please choose 1, 2, 3, or 4.\n");
    }

    return 0;
}

