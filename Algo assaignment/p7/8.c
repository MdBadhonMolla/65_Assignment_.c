#include <stdio.h>

int main() {
    int m, n;
    int number = -999999999;
    int row, colum;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int array[m][n];

    printf("Enter the elements of the array (%d x %d): \n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }



    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(number< array[i][j]){
				number = array[i][j];
				row = i;
				colum = j;
            }
        }
    }


    printf("\n\n");
    printf("Max Number on the matrix : %d\n",number);
    printf("Row : %d\n",row+1);
    printf("Colum : %d\n",colum+1);
    printf("\n\n");

    return 0;
}




