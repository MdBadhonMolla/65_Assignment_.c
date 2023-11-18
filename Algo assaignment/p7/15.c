#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;

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
				sum = sum + array[i][j];
        }
    }


    printf("\n The sum of all number : %d\n",sum);

    return 0;
}




