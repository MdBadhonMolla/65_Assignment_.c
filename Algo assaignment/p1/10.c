#include <stdio.h>
#include<math.h>

int main() {
    long int a = 2147483647;
    long long int b = 9223372036854775807LL;
    long double b = 1.1E+4932L;
    short int d = 32767;

    printf("The long int value: %ld\n", a);
    printf("The long long int value: %lld\n", b);
    printf("The long double value: %.2Le\n", c);
    printf("The short int value: %d\n", d);

}
