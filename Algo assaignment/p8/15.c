#include <stdio.h>

int main() {

    char str[100000];
    printf("Enter a string: ");
    gets(str);

    int length = 0;
    while (str[length] != NULL) {
        length++;
    }


	char str1[length];
	int count1=0, count2=0, lop=0;

	 printf("\n\nRevarce word atring:-");

    for(int i=length-1; i>=0; i--){
			count1++;
		if(str[i]==' '){
			count2 = i + count1-1;
			for(int j=i+1; j<count2+1; j++){
				 printf("%c",str[j]);
			}
			printf(" ");
			count1=0;
			count2=0;
			lop=i;
		}
    }

	for(int k=0; k<=lop; k++){
		printf("%c",str[k]);
	}
    printf("\n\n");


    return 0;
}




