#include <stdio.h>
#include <math.h>

int main() {
    double X;
    printf("Enter a floating-point number X: ");
    scanf("%lf", &X);

    double A = ceil(X);
    double B = floor(X);
    double C = fabs(X);

    printf("A (Rounded up): %.2lf\n", A);
    printf("B (Rounded down): %.2lf\n", B);
    printf("C (Absolute value): %.2lf\n", C);

    return 0;
}
