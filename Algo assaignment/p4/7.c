#include<stdio.h>

int main()
{
	char a;
	int i=1;

	while(1==1)
	{
		printf("input : ");
		scanf(" %c",&a);

		if(a=='a'||a=='A'){
			return 0;
		}else{
			printf("Print %d no input  = %c\n",i,a);

		}
	}


	printf("\n\n");
}





