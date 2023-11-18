#include<stdio.h>

int main()
{
	int array[5]={1,2,3,4,5};
	int size = sizeof(array) / sizeof(array[0]);
	int x=0,y=size-1;
	int extra=0;
	for(int i=0; i<size; i++)
	{
		if(x>y)
		{
			break;
		}
		extra=array[x];
		array[x]=array[y];
		array[y]=extra;
		x++;
		y--;
	}
	printf("Reverse array(0 to last) = ");
	for(int i=0; i<size; i++)
	{
		printf("%d, ",array[i]);
	}
	return 0;
}




