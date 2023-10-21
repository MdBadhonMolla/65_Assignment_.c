#include<stdio.h>

int main()
{
	int a;

	printf("Enter the subject result : ");scanf("%d",&a);

printf("\n\n");
		if(a>=90)
		{
			printf("Great = A");
		}
		else if(a>=86){
			printf("Great = A-");
		}
		else if(a>=82){
			printf("Great = B+");
		}
		else if(a>=78){
			printf("Great = B");
		}
		else if(a>=74){
			printf("Great = B-");
		}
		else if(a>=70){
			printf("Great = C+");
		}
		else if(a>=66){
			printf("Great = C");
		}
		else if(a>=62){
			printf("Great = C-");
		}
		else if(a>=58){
			printf("Great = D+");
		}
		else if(a>=55){
			printf("Great = D");
		}
		else{
			printf("Great = F");
		}
		printf("\n\n\n\n");
	return 0;

}




