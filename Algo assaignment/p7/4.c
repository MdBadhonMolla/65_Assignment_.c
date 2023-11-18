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

    printf("Major diagonal: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
            i++;
        }
    }
	printf("\n");
    printf("Minor diagonal: ");
    for (int i = 0; i < m; i++) {
        for (int j = n-1; j >= 0; j--) {
            printf("%d ", array[i][j]);
            i++;
        }
    }

    return 0;
}


