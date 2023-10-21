//copy by Chat GPT
//copy by Chat GPT
//copy by Chat GPT
//copy by Chat GPT
//copy by Chat GPT


#include <stdio.h>

int main() {
    int X, guess, N, flag;

    printf("Player-1, enter the number X: ");
    scanf("%d", &X);

    N = 3;
    flag = 0; // Flag to track if Player-2 guessed correctly

    printf("Player-2, you have %d chances to guess the number.\n", N);

    printf("Player-2, enter your first guess: ");
    scanf("%d", &guess);

    if (guess == X) {
        printf("Right, Player-2 wins!\n");
        flag = 1;
    } else {
        N--;
        printf("Wrong, %d Chance(s) Left!\n", N);
    }

    if (!flag) {
        printf("Player-2, enter your second guess: ");
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        } else {
            N--;
            printf("Wrong, %d Chance(s) Left!\n", N);
        }
    }

    if (!flag) {
        printf("Player-2, enter your third guess: ");
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
        } else {
            printf("Player-1 wins!\n");
        }
    }

    return 0;
}

