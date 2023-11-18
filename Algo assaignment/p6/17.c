#include<stdio.h>
int main()
{
 	int n = 15;
 	int p = (n+1)/2;
	int x = p-1;
	int y = 0;
	int befor = p-1, after = p+1;

 	for(int i = 1 ; i<=n ; i++){
		for(int j = 1; j<=n ; j++){
			if(i==p||j==p){
				printf("$");

			}
			else if((i==2&&x==j)||(i==n-1&&x==j)){
					printf("$");
					if(y<=1){
						x+=2;
						y=3;
					}
			}


			else{

					printf("_");

			}



		}
		x=p-1;
		y=0;

		printf("\n");
 	}
 }


