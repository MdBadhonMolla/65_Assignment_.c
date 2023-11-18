#include<stdio.h>

int main()
{
	float array[5]={1.2, 5.6 ,10.3 ,4.5 ,5.2};
	float avg=0.0;
	float sum=0.0;
	int size = sizeof(array) / sizeof(array[0]);
	for(int i=0; i<size; i++)
	{
		sum=sum+array[i];
	}
	avg= sum/size;
	printf("Reverse array = %.2f",avg);
	return 0;
}


