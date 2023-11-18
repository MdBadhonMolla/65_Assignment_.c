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
	int next[size-1]={};
	int j=0;
	int a,b;

	printf("Removing index number : ");scanf("%d",&b);
	for(int i=0; i<size; i++)
	{
		if(i==b)
		{
			continue;
		}else{
			next[j]=array[i];
			j++;
		}

	}
	printf("Array : ");
	display(next, size-1);

	return 0;
}


