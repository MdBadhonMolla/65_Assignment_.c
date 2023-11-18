#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");scanf("%d",&n);
	int a = n-1;
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d",j);

		}
		for(int j=i; j<=a*2-i; j++)
		{
			if(i==a*2-i){
				printf("%d",n);
				break;
			}
			printf("_");
		}
		for(int j=i; j>0; j--)
		{
			printf("%d",j);

		}
		printf("\n");
	}
}

