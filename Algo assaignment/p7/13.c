#include <stdio.h>

int main() {
    int m;

    printf("Enter the number of rows-columns : ");
    scanf("%d", &m);

    int array[m][m];
    int array1[m][m];
    int mattrix = m*m;
    int counter=0;

    printf("Enter the elements of the array (%d x %d): \n", m, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            array1[j][i]=array[i][j];
        }
    }

    printf("\n(Transpotr)\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
				printf("%d ", array1[i][j]);
        }printf("\n");
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
			if(array[i][j]==array1[i][j]){
				counter++;
			}
        }
    }

    if(counter==mattrix){
		printf("\nThe following (%d x %d) matrix is symmetric.\n",m,m);
    }
    else{
		printf("\nThe following (%d x %d) matrix is none symmetric.\n",m,m);
    }

    return 0;
}






