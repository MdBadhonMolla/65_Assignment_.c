#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int n, int m) {
    int minLen;
    if(n < m){
		minLen = n;
	}
	else{
		minLen = m;
	}
    for (int i = 0; i < minLen; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int n, m;

    printf("Enter the number of integers for array A: ");
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d for array A: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Enter the number of integers for array B: ");
    scanf("%d", &m);

    int B[m];
    for (int i = 0; i < m; i++) {
        printf("Enter integer %d for array B: ", i + 1);
        scanf("%d", &B[i]);
    }

    printf("Before swapping:\n");
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    swapArrays(A, B, n, m);

    printf("After swapping:\n");
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
