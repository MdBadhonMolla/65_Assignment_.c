#include <stdio.h>

int main()
{
    char str[100];
    char Rstr[100];
    int counter = 0, i= 0, a=0;

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

	while (str[i]!=NULL) {
        if(str[i]==Rstr[i]){
			a++;
        }
        i++;
    }
    if(a==length){
		printf("\n\nPalindrome Yes\n\n");
    }
    else{
		printf("\n\nPalindrome No\n\n");
    }

}



