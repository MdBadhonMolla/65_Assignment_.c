#include<stdio.h>

void dubNumRmv(int array1[], int size1)
{

	int size2,count=0,I=0;
	int array2[size1]={};
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
	printf("\nArray1 union Array2 : ");display(array2,size2);
}

void display(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");
}

int main()
{
	int array1[]={8,1,3,2,6,4,3,4,1,1,10};
	int array2[]={7,8,1,5,2,6,4,3};
	int size1 = sizeof(array1) / sizeof(array1[0]);
	int size2 = sizeof(array2) / sizeof(array2[0]);
	int x = size1 + size2;
	int array3[x]={};
	int j = 0;


	for(int i=0; i<size1; i++){
		array3[i] = array1[i];
	}
	for(int i=size1; i<x; i++){
		array3[i] = array2[j];
		//
		j++;
	}





	printf("First Array : ");display(array1,size1);
	printf("Second Array : ");display(array2,size2);
	printf("Marge 2 Array : ");display(array3,x);
	dubNumRmv(array3, x);




}

