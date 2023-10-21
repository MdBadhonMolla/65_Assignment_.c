#include<stdio.h>

void func(int a)
{
	if(a>=0)
	{
		printf("\n\na) : 1\n");
	}else{
		printf("\n\na) : 0\n");
	}
};


int main()
{
	int a, b, c;

	printf("1st value : ");
	scanf("%d",&a);
	printf("2nd value : ");
	scanf("%d",&b);
	printf("3rd value : ");
	scanf("%d",&c);

	func(a);
	func(b);
	func(c);






}

