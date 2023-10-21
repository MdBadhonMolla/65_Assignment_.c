#include <stdio.h>

int main() {
    int a,sum=0;
    printf("Enter the value : ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        sum = ((i*i)*(i+1))+ sum;
    }

    printf("Result: %d\n", sum);

    return 0;
}


