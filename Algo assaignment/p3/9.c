#include<stdio.h>

int main()
{
	char a;

	printf("Enter the sum value : ");scanf("%c",&a);
		printf("\n\n\n");

		if(a>=97&&a<=122){printf("\nAlphabet.",a);}
		else if(a>=65&&a<=90){printf("\nAlphabet.",a);}
		else if(a>=48&&a<=57){printf("\nNumber.",a);}
		else{printf("\nSpecial Character.",a);}

		printf("\n\n\n");

	return 0;

}


