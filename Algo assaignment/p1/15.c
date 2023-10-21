//copy by Chat GPT
//copy by Chat GPT
//copy by Chat GPT
//copy by Chat GPT

#include <stdio.h>

int main() {
    double number;

    // (a) Print the number right justified within 10 columns
    printf("(a) Right-justified within 10 columns: %10.2lf\n", number);

    // (b) Print the number right justified to 2 columns (assuming more than 2 digits)
    printf("(b) Right-justified to 2 columns: %2.2lf\n", number);

    // (c) Print the number rounded to two decimal places
    printf("(c) Rounded to two decimal places: %.2lf\n", number);

    // (d) Print the number rounded to an integer (without type casting)
    printf("(d) Rounded to an integer: %d\n", (int)number);

    // (e) Print the number in exponential notation/scientific notation
    printf("(e) Exponential notation: %e\n", number);

    printf("Enter a floating-point number: ");
    scanf("%lf", &number);

    return 0;
}

