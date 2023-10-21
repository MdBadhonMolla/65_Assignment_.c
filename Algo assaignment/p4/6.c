#include<stdio.h>

int main()
{
	int a,b;

	printf("Player-1 Choice a number : ");scanf("%d",&a);

	for(int i=3; i>=1; i--)
	{
		printf("Player-2 enter a number : ");scanf("%d",&b);
		if(a==b){
			printf("\nYour number match : Player-2 WIN.");
			printf("\n\n");
			return 0;
		}else{
			printf("your left %d chance!\n\n",i);
		}
	}
	printf("\n");

	printf("Your number not match : Player-1 WIN.");
	printf("\n\n");
}




