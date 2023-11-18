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
	int size1,size2,count=0,I=0;
	int array1[]={8, 1, 3, 2, 6, 4, 3, 4, 1, 1, 3};
	int array2[]={};
	size1 = sizeof(array1) / sizeof(array1[0]);
	size2 = size1;
	for(int i=0; i<size1; i++){
		for(int j=i+1; j<size1; j++){
			if(array1[i]==array1[j]){
				count++;
				size2--;
				break;
			}
		}
		if(count==0){
			array2[I]=array1[i];
			I++;
		}
		count=0;
	}
	display(array2,size2);


}
