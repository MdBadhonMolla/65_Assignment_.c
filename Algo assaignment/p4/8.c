#include<stdio.h>

int main()
{
	int a, rem, ans, rev=0;

	printf("Enter a value : ");scanf("%d",&a);
	rem=a;
	while(a>0)
	{
			rem = a%10;
			a = a/10;
			rev = (rev+rem)*10;

	}

	rev = rev/10;
	printf("\n%d\n",rev);
}
