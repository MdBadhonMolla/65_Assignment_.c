#include <stdio.h>

int main() {
	int i=0;
    char inputString[100];
    printf("Enter a string: ");
    gets(inputString);

    int sum = 0;
    while(inputString[i] != NULL) {
        if (inputString[i] >= '1' && inputString[i] <= '9') {
            sum = sum + inputString[i] - '0';     //input Stringis a character thats why we get the array element ascii number, we use to - '0' - the extra ascii number...
            printf("Sum of digits**************: %d\n", sum);
        }
        i++;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}

