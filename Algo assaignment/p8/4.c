#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int length = 0, space = 0;
    while (str[length] != NULL) {
        length++;
    }

	for(int i = 0; i < length; i++){
		if(str[i]==' '){
			space++;
		}
	}


    printf("Length of the string: %d\n", space+1);

    return 0;
}

