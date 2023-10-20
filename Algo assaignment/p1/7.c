#include<stdio.h>

int main ()
{
	//declare the Variable
	int a;
	float b;
	char c;


	printf("Inpute integer number : ");
	scanf("%d",&a);
	printf("Inpute Float number : ");
	scanf("%f",&b);
	printf("Inpute character : ");
	scanf(" %c",&c);// Note the space before %c to consume any leading whitespace.


	printf("\n\nThe integer number: %d",a);
	printf("\nThe Float number: %f",b);
	printf("\nThe integer value: %c\n",c);



}

