#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");scanf("%d",&n);

	int a = n/2;
	int b = n-a;

	for(int i=1; i<=a; i++)
	{
		for(int j=i; j<=a; j++)
		{
			printf("_");
		}
		for(int j=1; j<=i*2-1; j++)
		{
			printf("*",i);

		}
		printf("\n");
	}
	for(int i=0; i<b; i++)
	{
		for(int j=b; j>b-i; j--)
		{
			printf("_");
		}
		for(int j=i+1; j<=(b*2-i)-1; j++)
		{
			printf("*",i);

		}
		printf("\n");
	}
}






