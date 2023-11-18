#include<stdio.h>

int main()
{
	int array[5]={1,2,3,4,5};
	int max=0,min=array[0];
	int max_index,min_index;
	int size = sizeof(array) / sizeof(array[0]);
	for(int i=0; i<size; i++)
	{
		if(array[i]>max)
		{
			max = array[i]; max_index = i;
		}

		if(array[i]<min){
			min = array[i]; min_index = i;
		}
	}
	printf("\n\nMax value : %d \tMax index : %d\nMin value : %d \tMin index : %d",max,max_index,min,min_index);
	return 0;
}



