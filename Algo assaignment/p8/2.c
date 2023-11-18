#include<stdio.h>

int main()
{
	char str[100];
	char str1[100];

    printf("Enter a string - 1: ");
    gets(str);
    printf("Enter a string - 2: ");
    gets(str1);
    printf("\n\n");
    printf("%s %s",str,str1);
    printf("\n\n");
}
