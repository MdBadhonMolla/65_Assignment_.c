#include<stdio.h>

void display(int a[], int n)
{

	for(int i=0; i<n; i++)
	{
		printf("%d, ",a[i]);
	}

}

void sort(int a[], int n)
{
	int x;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1])
			{
				x = a[j];
				a[j] = a[j+1];
				a[j+1] = x;

			}
		}
	}display(a,n);printf("\n");

}

int main()
{
	int array[]={7,8,1,3,2,6,4,3};
	int size = sizeof(array) / sizeof(array[0]);
	printf("Sort array : ");
	sort(array,size);

	return 0;
}




