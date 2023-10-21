//copy by Chat GPT
//copy by Chat GPT
//copy by Chat GPT
//copy by Chat GPT


#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    double x = 1.0; // Initial guess for the root
    double tolerance = 1e-6; // Tolerance for convergence
    int max_iterations = 100; // Maximum number of iterations

    int n;
    double result = 0;
    double delta;

    for (n = 0; n < max_iterations; n++) {
        delta = pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
        result += delta;

        if (fabs(delta) < tolerance)
            break;
    }

    printf("x = %.6f\n", x);

    return 0;
}
