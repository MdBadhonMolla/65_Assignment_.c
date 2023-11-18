#include<stdio.h>

int main()
{

	int n = 7;

	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(i==3){
				printf("H");
			}
			else{
				if(j==0||j==n-1){
					printf("H");
				}
				else{
					printf(" ");
				}
			}
		}printf("\n");
	}
}
