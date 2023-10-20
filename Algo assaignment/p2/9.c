#include<stdio.h>

int main()
{
	int a = 9, b = 12, c = 3, x, y, z;

	x = a-b/3+c*2-1;
	y = a-(b/(3+c)*2)-1;
	z = a-((b/3)+c*2)-1;


	printf("\na : %d\nb : %d\nc : %d\n",a,b,c);

	printf("\nX [a-b/3+c*2-1] : %d",x);
	printf("\nY [a-(b/(3+c)*2)-1] : %d",y);
	printf("\nZ [a-((b/3)+c*2)-1] : %d",z);

}




