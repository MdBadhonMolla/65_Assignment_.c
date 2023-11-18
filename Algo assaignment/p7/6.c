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


//2nd


    int array1[m][n];

    printf("Enter the elements of the array (%d x %d): \n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

//sum

	int array2[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            array2[i][j] = array1[i][j] + array[i][j];
        }
    }


    printf("New sub array: \n\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array2[i][j]);
        }printf("\n");
    }

    return 0;
}



