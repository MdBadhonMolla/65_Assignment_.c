#include<stdio.h>

int main()
{
	int array[5]={1,2,3,4,5};
	int sum=0;
	int size = sizeof(array) / sizeof(array[0]);
	for(int i=0; i<size; i++)
	{
		sum=sum+array[i];
	}
	printf("Reverse array = %d",sum);
	return 0;
}

