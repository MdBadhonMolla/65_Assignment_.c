#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number : ");scanf("%d",&a);

	for(int i=0; i<a; i++)
	{
		for(int j=1; j<=a; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

