#include <stdio.h>

int main()
{
    char str[100];
    char Rstr[100];
    int counter = 0;

    printf("Enter a string: ");
    gets(str);

    int length =0;
    while (str[length] != NULL) {
        length++;
    }

	int size = length-1;

    for(int i=size; i>=0; i--){
		Rstr[i] = str[counter];
		counter++;
    }


    printf("\nThe reverse of a string: %s\n",Rstr);

    return 0;
}


