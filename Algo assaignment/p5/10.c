#include<stdio.h>

int main()
{
	char array[]={7,8,3,1,2,6,4,3};
	int count=0,a;
	int size = sizeof(array) / sizeof(array[0]);

	printf("Enter searching value : ");scanf("%d",&a);

	for(int i=0; i<size; i++)
	{
		if(array[i]==a)
		{
			count++;
			printf("[%d] - value %d-no index number = %d\n",a,count,i);
		}
	}

	return 0;
}





