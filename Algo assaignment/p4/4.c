#include<stdio.h>

int main()
{
	int a;
	float c=0,b;

	printf("Haw many tream : ");scanf("%d",&a);

	for(int i=1; i<=a; i++)
	{
		printf("Enter %d number : ",i);scanf("%f",&b);
		c = b+c;
	}
	printf("\n\n");
	c=c/a;
	printf("AVG of %d = %.3f",a,c);
	printf("\n\n");
}



