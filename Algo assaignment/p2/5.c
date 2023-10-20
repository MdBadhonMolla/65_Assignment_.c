#include<stdio.h>

int main()
{
	int a = 5, b = 7;


	printf("\na : 5\nb : 7\n");
	a += b;
	printf("\nincrement [a += b] : %d",a);
	a = 5, b = 7;
	b -= a;
	printf("\ndecrement [b -= a] : %d",b);



}



