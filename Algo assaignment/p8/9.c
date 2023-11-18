#include <stdio.h>

int main() {
	int counter = 0;
    int i = 0;
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int length =0;
    while (str[length] != NULL) {
        length++;
    }

	char search;
	printf("Enter the searching character: ");
    scanf(" %c",&search);

	while (str[i]!=NULL) {
        if(str[i]== toupper(search)||str[i]== tolower(search)){
			counter++;
        }
        i++;
    }

    printf("\n\n[%c] character in the string in - %d - times. ",search,counter);
    printf("\n\n");

    return 0;
}

