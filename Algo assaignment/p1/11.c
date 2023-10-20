#include <stdio.h>

int main() {
    unsigned int ui_var = 4294967295;
    unsigned long int uli_var = 4294967295;
    unsigned long long int ulli_var = 18446744073709551615ULL;
    unsigned short int usi_var = 65535;

    printf("The unsigned int value: %u\n", ui_var);
    printf("The unsigned long int value: %lu\n", uli_var);
    printf("The unsigned long long int value: %llu\n", ulli_var);
    printf("The unsigned short int value: %hu\n", usi_var);


}
