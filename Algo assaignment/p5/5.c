#include<stdio.h>

int main()
{
	int array[5]={1,2,3,4,5};
	int sum=0;
	int size = sizeof(array) / sizeof(array[0]);
	for(int i=0; i<size; i++)
	{
		if(i%2==0)
		{
			sum=sum+array[i];
		}
	}
	printf("sum up all the even indexed integers in that array = %d",sum);
	return 0;
}


