#include <stdio.h>

int main() {

    char str[100];
    char str1[1];
    printf("Enter a string: ");
    gets(str);

	int sum = 0;
    int count =0;
    int length = 0;
    while (str[length] != NULL) {
        length++;
    }

    for(int i=0; i<length; i++){
		for(int j=i+1; j<length; j++){
			if(str[i]==toupper(str[j]) || str[i]==tolower(str[j])){
				count++;
			}
		}
		if(count >= sum){
			sum = count;
			str1[0] = str[i];
			count=0;
		}
		count=0;
    }

    printf("\n\nThe highest %c  in  [ %d ] times\n\n",str1[0],sum+1);

    return 0;
}



