#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number : ");scanf("%d",&a);

	for(int i=1; i<=a; i++)
	{
		for(int j=i; j<=a-1; j++)
		{
			printf("_");
		}
		for(int j=1; j<=i; j++)
		{
			printf("%d",i);

		}
		printf("\n");
	}
}




