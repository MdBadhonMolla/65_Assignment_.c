#include<stdio.h>

int main()
{
	int a, rem=0, ans=0;

	printf("Enter a value : ");scanf("%d",&a);

	int i=1;
	while(i<=a)
	{
			rem = (i+rem)*10;
			ans = ans+rem;
		i++;
	}

	ans = ans/10;
	printf("\n%d\n",ans);
}

