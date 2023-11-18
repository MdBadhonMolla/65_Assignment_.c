#include<stdio.h>
int main()
{
 	int n = 10;


 	for(int i = 1 ; i<=n ; i++){
		if(i%2!=0){
			for(int j = 0 ; j<n ; j++){
				printf("*");
			}
		}
		else{
			for(int k = 1 ; k<=n ; k++){
				if(k==1||k==n){
					printf("*");
				}
				else{
					printf("_");
				}
			}
		}
		printf("\n");
 	}
 }
