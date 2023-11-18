#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number : ");scanf("%d",&a);

	for(int i=0; i<=a; i++)
	{
		for(int j=i+1; j<=a+i; j++)
		{
			printf("%d",j);

		}
		printf("\n");
	}
}


