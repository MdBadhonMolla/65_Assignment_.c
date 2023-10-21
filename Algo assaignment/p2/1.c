#include<stdio.h>

int main()
{
	int a,b;
	float add,sub,mul,quo,rem;

	printf("1st number : ");scanf("%d",&a);
	printf("2nd number : ");scanf("%d",&b);

	add = a+b;
	sub = a-b;
	mul = a*b;
	quo = a/b;
	rem = a%b;

	printf("\nAddition : %.2f",add);
	printf("\nSubtraction : %.2f",sub);
	printf("\nMultiplication : %.2f",mul);
	printf("\nQuotient : %.2f",quo);
	printf("\nReminder : %.2f",rem);

}
