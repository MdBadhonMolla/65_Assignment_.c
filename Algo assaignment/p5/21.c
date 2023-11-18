#include<stdio.h>



void display(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}printf("}");
	printf("\n");
}

int main()
{
	int size1,size2,count=0,I=0;
	int array1[]={8, 1, 3, 2, 6, 4, 3, 4, 1, 1, 3};
	int array2[]={2, 6, 4, 3, 4, 1};
	size1 = sizeof(array1) / sizeof(array1[0]);
	size2 = sizeof(array2) / sizeof(array2[0]);
	int x = size1;
	int array3[size1]={};
	for(int i=0; i<size1; i++){
		for(int j=0; j<size2; j++){
			if(array1[i]==array2[j]){
				count++;
				x--;
				break;
			}
		}
		if(count==0){

			array3[I]=array1[i];
			I++;
		}
		count=0;
	}
	printf("Set A : {");display(array1,size1);
	printf("Set B : {");display(array2,size2);
	printf("\n");
	printf("A and B (a-b) : {");display(array3,x);
	printf("\n");
	printf("\n");

}

