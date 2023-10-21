#include<stdio.h>

void check(int a,int b,int c)
{
	int sum = 0;
	sum = a+b+c;
	if(sum==180)
	{
		printf("Triangle is valid.");
	}
	else{
		printf("Triangle isn't valid.");
	}
}

int main()
{
	int a=90,b=45,c=45;

	if(a!=0 && b!=0 && c!=0)
	{
		check(a,b,c);
	}
	else{
		printf("Triangle isn't valid.");
	}
}


