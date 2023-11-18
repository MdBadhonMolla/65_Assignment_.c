#include <stdio.h>

int main() {
    int m;
    int number = 0;


    printf("Enter the number of rows-columns (must odd number): ");
    scanf("%d", &m);
	if(m%2==0){
			printf("\n\nEnter the odd number.\n\n");
		return 0;
	}
    int array[m][m];

    printf("Enter the elements of the array (%d x %d): \n", m, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }


	int jn=(m+1)/2;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i%2!=0||j%2!=0){
				number = number + array[i][j];
            }

        }
    }


    printf("\n\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
			if(i%2!=0||j%2!=0){
			printf("%c[%dm%d ", 0x1B, 42,array[i][j]);
			printf("%c[%dm", 0x1B, 40);
			}
			else{

            printf("%d ", array[i][j]);
			}
        }
        printf("\n");
    }


    printf("\n\n");
    printf("Sum 1st,last row, cross : %d\n",number);
    printf("\n\n");

    return 0;
}






