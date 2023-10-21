#include<stdio.h>

int main()
{
	int a, rem, ans, rev=0, extra;

	printf("Enter a value : ");scanf("%d",&a);
	extra = a;
	rem=a;
	while(a>0)
	{
			rem = a%10;
			a = a/10;
			rev = (rev+rem)*10;

	}

	rev = rev/10;

	if(extra == rev){
		 printf("\n%d - is a palindrome number.\n\n",rev);
	}
	else{
		printf("\n%d - isn't a palindrome number.\n\n",rev);
	}
	//revarce kora marh equation then condition
}

