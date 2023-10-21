#include<stdio.h>

int main()
{
	int a,b;

	printf("Enter the 1st value : ");scanf("%d",&a);
	printf("Enter the 2nd value : ");scanf("%d",&b);


	if(a==b)
	{
		printf("\n\n[%d] is equal to [%d]\n\n",a,b);
	}
	else if(a>b)
	{
		printf("\n\n[%d] is greater than [%d]\n\n",a,b);
	}
	else
	{
		printf("\n\n[%d] is less than [%d] \n\n",a,b);
	}

}


