#include<stdio.h>

int main()
{
	int array[5]={1,2,3,4,5};
	int size = (sizeof(array) / sizeof(array[0]))-1;
	printf("Reverse array (last to 0) = ");
	for(int i=size; i>=0; i--)
	{
		printf("%d, ",array[i]);
	}
	return 0;
}
