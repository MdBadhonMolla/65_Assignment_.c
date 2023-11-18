#include <stdio.h>

int main() {
	int i=0;
	int count = 0;
    char inputString[100];
    printf("Enter a string: ");
    gets(inputString);

    int sum = 0;
    while(inputString[i] != NULL) {
        if (inputString[i] <= '.'||inputString[i] <= ',') {
            count++;
        }
        i++;
    }

    printf("Total sentenc: %d\n", count);

    return 0;
}


