#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int sum = 0,a;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        } else {
            sum -= i;
        }
    }

    printf("Result: %d\n", sum);

    return 0;
}

