#include<stdio.h>

int main()
{
	float a,b, sum=0;
	char c;

	printf("Enter the Equation (number,operator,number) : ");scanf("%f",&a);scanf("%c",&c);scanf("%f",&b);

	switch(c)
	{
	case '+':
		sum=a+b;
		break;
	case '-':
		sum=a-b;
		break;
	case '*':
		sum=a*b;
		break;
	case '/':
		if(b==0)
		{
			printf("\nZero as divisor is not valid!\n\n");
			break;
		}
		else{
			sum=a/b;
			break;
		}
	}

	printf("\nAns : %.3f\n\n",sum);

	return 0;

}



