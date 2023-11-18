#include<stdio.h>
int main()
{
 	int n = 15;
 	int p = n-1;


 	for(int i = 1 ; i<=n ; i++){
		if(i==1||i==n){
			for(int j = 0 ; j<n ; j++){
				printf("Z");
			}
		}
		else{
			for(int k = 1 ; k<=p ; k++){
				if(k==p){
					printf("Z");
					p--;
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
 	}
 }

