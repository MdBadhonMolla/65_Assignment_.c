#include<stdio.h>


int main()
{
	int a,b,asq,bsq;


	printf("Haw many tream : ");scanf("%d",&a);
	printf("Haw many tream : ");scanf("%d",&b);

	int x,y;
	x=a;
	y=b;


		if(x<y)
		{
			while(x<y)
			{
				asq= x*x;
				bsq= y*y;
				if(asq!=bsq||x!=y)
				{
					printf("%d, ",asq);
					x++;
					y--;

				}
			}
			printf("Reached!");
			return 0;
		}
		else if(x>y)
		{
			while(x>y)
			{
				asq= x*x;
				bsq= y*y;
				if(asq!=bsq||x!=y)
				{
					printf("%d, ",asq);
					x--;
					y++;

				}
			}
			printf("Reached!");
			return 0;
		}
		else{
			printf("Reached!");
			return 0;
		}

}




