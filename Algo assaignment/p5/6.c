#include<stdio.h>

int main()
{
	int array1[5]={1,2,3,4,5};
	int array2[5]={1,2,3,4,5};
	int sum=0;
	int size1 = sizeof(array1) / sizeof(array1[0]);

	int array3[size1];

	for(int i=0; i<size1; i++)
	{
		sum= array1[i]+array2[i];
		array3[i]=sum;
	}
	printf("The 3rd array = ");
	for(int i=0; i<size1; i++)
	{
		printf("%d, ",array3[i]);
	}
	return 0;
}



