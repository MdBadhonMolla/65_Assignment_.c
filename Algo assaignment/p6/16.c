#include<stdio.h>
int main()
{
 	int n = 15;
 	int p = n;


 	for(int i = 1 ; i<=n ; i++){
		for(int j = 1; j<=n ; j++){
			if(j==i||j==p){
				printf("*");
			}
			else{
				printf("_");
			}
		}
		p--;
		printf("\n");
 	}
 }


