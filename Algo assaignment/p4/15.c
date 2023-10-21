#include <stdio.h>

int main() {
    int a,b,sum=1;
    printf("Enter the value(x) : ");
    scanf("%d", &a);
    printf("Enter the value(y) : ");
    scanf("%d", &b);

    if(a>=0&&b>=0){
		printf("\n");
		printf("%d to the power %d = ",a,b);
		for (int i = 1; i <= b; i++) {
			sum=sum*a;
		}
		printf("%d",sum);
    }
    else{
		printf("\n\nCondition x not negative");
    }

    printf("\n\n\n");
    return 0;
}





