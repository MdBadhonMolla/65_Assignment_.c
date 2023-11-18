#include<stdio.h>

void display(int a[], int n)
{

	for(int i=0; i<=n; i++)
	{
		printf("%d, ",a[i]);
	}

}

int main()
{
	int array[]={7,8,1,3,2,6,4,3};
	int size = (sizeof(array) / sizeof(array[0]))-1;
	int next[size]={};
	int j=0;
	for(int i=size; i>=0; i--)
	{
		next[j]=array[i];
		j++;
	}
	printf("1st Array : ");
	display(array, size);
	printf("\n2nd Array : ");
	display(next, size);

	return 0;
}
