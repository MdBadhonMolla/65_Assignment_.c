#include <stdio.h>

int main() {
    int a,b,x=2,sum=1,c;
    printf("Enter the value : ");
    scanf("%d", &a);
    printf("Enter the value : ");
    scanf("%d", &b);

	c=a*b;
		for (int i = 1; i <= b; i++){
			if(a%x==0&&b%x==0){
				a=a/x;
				b=b/x;
				sum=sum*x;
			}
			else{
				x++;
				if(x>5){
					break;
				}
			}
		}
		sum=sum*a*b;//...............LCM
		c=c/sum;//...................GCD formula
		printf("\n\nAns : %d",c);
		printf("\nAns : %d",sum);

    printf("\n\n\n");
    return 0;
}






