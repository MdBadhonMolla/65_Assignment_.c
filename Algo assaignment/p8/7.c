#include <stdio.h>

int main()
{

    int i = 0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char chr;

    // Loop
    while (str[i]!=NULL) {
        chr = str[i];
        if(chr == toupper(chr)){
			printf("%c", tolower(chr));
			i++;
        }else{
        	printf("%c", toupper(chr));
			i++;
        }

    }

    return 0;
}




