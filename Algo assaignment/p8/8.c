#include <stdio.h>


void sortString(char *str, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i = 0;
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int length =0;
    while (str[length] != NULL) {
        length++;
    }

	sortString(str,length);

	while (str[i]!=NULL) {
        printf("%c",str[i]);
        i++;
    }

    return 0;
}
