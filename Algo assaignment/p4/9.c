#include <stdio.h>


char fun(float at, float as, float ct, float mid, float fi) {
    float total = (at * 1) + (as * 1) + (ct * 1) + (mid * 0.6) + (fi * 0.4);

    if (total >= 90) {
        return 'A';
    } else if (total >= 86) {
        return 'A-';
    } else if (total >= 82) {
        return 'B+';
    } else if (total >= 78) {
        return 'B';
    } else if (total >= 74) {
        return 'B-';
    } else if (total >= 70) {
        return 'C+';
    } else if (total >= 66) {
        return 'C';
    } else if (total >= 62) {
        return 'C-';
    } else if (total >= 58) {
        return 'D+';
    } else if (total >= 55) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int a;
    printf("Enter the number of students: ");
    scanf("%d", &a);

    float b, c, d, e, f;
    char grade;

    for (int i = 0; i < a; i++) {
        printf("\nStudent %d:\n",i+1);

        printf("Enter attendance marks (out of 5): ");
        scanf("%f", &b);
        printf("Enter assignment marks (out of 10): ");
        scanf("%f", &c);
        printf("Enter class test marks (out of 15): ");
        scanf("%f", &d);
        printf("Enter midterm marks (out of 50): ");
        scanf("%f", &e);
        printf("Enter term final marks (out of 100): ");
        scanf("%f", &f);

        grade = fun(b, c, d, e, f);
        printf("Grade: %c\n", grade);
    }

    return 0;
}
