#include<stdio.h>

int main()
{
	int a;

	printf("Enter the sum value : ");scanf("%d",&a);

	if((a % 4 == 0 && a % 100 != 0) || (a % 400 ==0))
	{
		printf("\n\n[%d] is a leap year\n\n");
	}else{printf("\n\n[%d] isn't a leap year\n\n");}

	return 0;

}
