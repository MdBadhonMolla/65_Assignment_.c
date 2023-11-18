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
	int size = sizeof(array) / sizeof(array[0]);
	int next[size+1]={};
	int j=0;
	int a,b;
	printf("Enter the number : ");scanf("%d",&a);
	printf("Enter the index number : ");scanf("%d",&b);
	for(int i=0; i<=size; i++)
	{
		if(i==b)
		{
			next[i]=a;

		}else{
			next[i]=array[j];
			j++;
		}

	}
	printf("Array : ");
	display(next, size);

	return 0;
}

