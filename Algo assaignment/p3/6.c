#include<stdio.h>

int check(int a)
{
	int rem=0, ans=a, count;


	while(ans!=0)
	{

		rem=ans%10;
		ans /= 10;
		if(rem==0)
		{
			printf("\n\nFind a [0] in [%d]",a);
			return 0;
		}
	}
	printf("\n\nNot find any [0] in [%d]",a);


}

int main()
{
	int a;

	printf("Enter the sum value : ");scanf("%d",&a);

	if(a==0)
	{
		printf("\n\nZero is not a valid input [%d]",a);
		return 0;
	}

	check(a);

	if(a>=0)
	{
		printf(" and positive number.\n\n");
	}else{
		printf(" and negative number.\n\n");
		}
}


