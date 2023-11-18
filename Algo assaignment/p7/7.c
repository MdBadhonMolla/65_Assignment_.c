#include <stdio.h>

int main() {
    int x=3;
    int y=0;
    int array[3][3];
    int array2[3][3];

    printf("Enter the elements of the array (%d x %d): \n", x, x);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &array[i][j]);
        }
    }


//2nd


    int array1[3][3];

    printf("Enter the elements of the array (%d x %d): \n", x, x);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

//sum

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
           for(int k = 0; k < x; k++){
			y = y + (array1[k][i] * array[j][k]);
			printf("x(%d)(%d) == %d   ,  y(%d)(%d) == %d\n",k,i,array1[k][i],j,k,array[j][k]);

           }
           array2[j][i]= y;
           printf("array2(%d)(%d) == %d*********************\n",j,i,y);
           y=0;
        }
    }


    printf("New sub array: \n\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", array2[i][j]);
        }printf("\n");
    }

    return 0;
}




