#include<stdio.h>

void display(int a[], int n)
{

	for(int i=0; i<n; i++)
	{
		printf("%d, ",a[i]);
	}

}

int main()
{
	int array[]={7,8,1,3,2,6,4,3};
	int size = sizeof(array) / sizeof(array[0]);

	for(int i=0; i<size; i++)
	{
		if(array[i]%3==0)
		{
			array[i]=-1;
		}

	}
	printf("Array : ");
	display(array, size);

	return 0;
}



