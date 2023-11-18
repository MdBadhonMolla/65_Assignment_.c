#include <stdio.h>

int main() {
    int m;
    int number = 0;


    printf("Enter the number of rows-columns : ");
    scanf("%d", &m);

    int array[m][m];

    printf("Enter the elements of the array (%d x %d): \n", m, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }


	int jn=m-1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if(i==0||i==m-1||i==j||j==jn){
					if(j==jn){
						number = number + array[i][j];
						jn--;
					}
					else if(i==0||i==m-1||i==j){
						number = number + array[i][j];
						printf("x = %d  ,  y = %d  : %d    jn : %d\n",i,j,number,jn);
					}
            }

        }
    }


    printf("\n\n");
    printf("Sum 1st,last row, cross : %d\n",number);
    printf("\n\n");

    return 0;
}





