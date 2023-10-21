#include<stdio.h>

int main()
{
	int a, b;

	printf("1st value : ");
	scanf("%d",&a);
	printf("2nd value : ");
	scanf("%d",&b);

	if(a<b)
	{
		printf("\n\nBigest value : %d\n\n",b);
	}else{
		printf("\n\nBigest value : %d\n\n",a);
	}




}
