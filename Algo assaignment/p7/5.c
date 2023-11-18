#include <stdio.h>

int main() {
    int a;

    printf("Enter the number: ");
	scanf("%d", &a);
    int array[a][a];


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == j) {
                array[i][j] = 1;
            } else {
                array[i][j] = 0;
            }
        }
    }

    printf("The identity matrix: \n\n\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", array[i][j]);
        }printf("\n");
    }

    return 0;
}



