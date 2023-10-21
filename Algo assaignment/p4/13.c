#include <stdio.h>

int main() {
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    printf("\n");
	printf("Factorial %d! = ",n);
    int sum=1;
    for (int i = 1; i <= n; i++) {
			sum=sum*i;
			if(i==n){
				printf("%d = %d",i,sum);
			}else{
				printf("%d X ",i);
			}

    }
    printf("\n\n\n");
    return 0;
}



