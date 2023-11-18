#include <stdio.h>

int main() {

    char str[100];
    printf("Enter a string: ");
    gets(str);

    int count;
    int length =0;
    while (str[length] != NULL) {
        length++;
    }

    for(int i=0; i<length; i++){
		for(int j=i+1; j<length; j++){
			if(str[i]==toupper(str[j]) || str[i]==tolower(str[j])){
				count++;
				break;
			}
		}
		if(count==0){
			printf("%c",str[i]);
		}
		count=0;
    }

    return 0;
}


