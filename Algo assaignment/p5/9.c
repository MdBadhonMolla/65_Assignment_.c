#include<stdio.h>

int main()
{
	char array[]={'U','N','I','T','E','D','I','N','T','E','R','N','A','T','I','O','N','A','L','U','N','I','V','E','R','S','I','T','Y'};
	int count=0;
	int size = sizeof(array) / sizeof(array[0]);
	for(int i=0; i<size; i++)
	{
		if(array[i]=='A'||array[i]=='E'||array[i]=='I'||array[i]=='O'||array[i]=='U')
		{
			count++;
		}
	}
	printf("\n\nNumber of vowels in that array : %d ",count);
	return 0;
}




