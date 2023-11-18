#include<stdio.h>

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
	int size1,size2,count=0,I=0;
	int array1[]={8,1,3,2,6,4,3,4,1,1,10};
	int array2[]={7,8,1,5,2,6,4,3};
	int array3[]={};
	size1 = sizeof(array1) / sizeof(array1[0]);
	size2 = sizeof(array2) / sizeof(array2[0]);

	for(int i=0; i<size1; i++){
		for(int j=0; j<size2; j++){
			if(array1[i]==array2[j]){
				count++;
				break;
			}
		}
		if(count>0){
			array3[I]=array1[i];
			I++;
		}
		count=0;
	}
	int size4,count1=0,A=0;
	int array4[]={};
	size4 = I+1;
	for(int i=0; i<I+1; i++){
		for(int j=i+1; j<I+1; j++){
			if(array3[i]==array3[j]){
				count1++;
				size4--;
				break;
			}
		}
		if(count1==0){
			array4[A]=array3[i];
			A++;
		}
		count1=0;
	}
	printf("First Array : ");display(array1,size1);
	printf("Second Array : ");display(array2,size2);
	printf("\n\n");
	printf("1st Intersection 2nd : ");display(array4,size4);




}

