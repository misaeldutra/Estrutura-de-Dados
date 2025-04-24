#include <stdio.h>
#include <stdlib.h>

int main(){
    int var = 10;
    int *ptr = &var;

    printf("O valor da variavel declarada: %d\n", *ptr);
    printf("O endereco da variavel: %p\n", ptr);

    return 0;
}