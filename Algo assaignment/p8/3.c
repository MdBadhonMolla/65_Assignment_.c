#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int length = 0, vowels = 0;
    while (str[length] != NULL) {
        length++;
    }

	for(int i = 0; i < length; i++){
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
			vowels++;
		}
	}


    printf("The vowels : %d\n", vowels);

    return 0;
}
