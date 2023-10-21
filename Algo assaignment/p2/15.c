#include <stdio.h>

int main() {
    printf("Size in int: %lu bytes\n", sizeof(int));
    printf("Size in float: %lu bytes\n", sizeof(float));
    printf("Size in double: %lu bytes\n", sizeof(double));
    printf("Size in char: %lu byte\n", sizeof(char));

    return 0;
}

