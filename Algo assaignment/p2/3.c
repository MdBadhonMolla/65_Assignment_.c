#include<stdio.h>

int main()
{
	float a,b,a2,b2,a3,b3;
	float sum =0;

	printf("Input a : ");scanf("%f",&a);
	printf("Input b : ");scanf("%f",&b);

	a2 = a*a;
	b2 = b*b;
	a3 = a*a*a;
	b3 = b*b*b;
	sum = (3.13*a2+2.01*b3)/(7.16*b2+2.01*a3);

	printf("\nAns the equation : %.4f",sum);


}


