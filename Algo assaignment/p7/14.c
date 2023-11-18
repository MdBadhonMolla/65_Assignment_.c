#include <stdio.h>

int main() {
    int m, n;


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
			for (int a = i; a < m; a++) {
				for (int b = (a == i) ? j + 1 : 0; b < n; b++) {
					if(array[i][j]== array[a][b]){
						array[i][j]= -1;
					}
				}
			}
        }
    }
	printf("\nReplace all the duplicate integers by -1 in that matrix: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",array[i][j]);
        }printf("\n");
    }


    printf("\n\n");

    return 0;
}




