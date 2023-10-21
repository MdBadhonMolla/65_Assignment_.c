#include <stdio.h>

int globalVariable = 10; //Global variable

int main() {
    printf("A. Value before defining the local variable: %d\n", globalVariable);

    int localVariable = 5; //Local variable in the same name

    printf("B. Value after defining the local variable: %d\n", localVariable);

    return 0;
}
