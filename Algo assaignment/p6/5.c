#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number : ");scanf("%d",&a);

	for(int i=0; i<a; i++)
	{
		for(int j=a; j>=a-i; j--)
		{
			printf("%d",j);

		}
		printf("\n");
	}
}
