#include<stdio.h>

int main()
{
	int a,b=1;

	printf("Enter a value : ");scanf("%d",&a);

	for(int i=1; i<=a; i++)
	{
		printf("%d, ",b);
		b= b-1;
		if(b<=-1){
			b=1;
		}
	}
}


