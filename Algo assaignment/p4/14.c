#include <stdio.h>

int fact(int n)
{
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
    return sum;
}

int main() {
    int a,b,x,y,z,ans;
    printf("Enter the value(n) : ");
    scanf("%d", &a);
    printf("Enter the value(r) : ");
    scanf("%d", &b);

    if(a>=b){
		x=fact(a);
		y=fact(b);
		z=a-b;
		z=fact(z);
		ans=x/(y*z);
		printf("\n\nnCr = %d",ans);
    }
    else{
		printf("\n\nCondition n>=r (nCr)");
    }

    printf("\n\n\n");
    return 0;
}




