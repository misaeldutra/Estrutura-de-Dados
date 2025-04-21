#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, soma = 0;
    int matriz[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    for(i = 0; i < 3; i++){
        soma = soma + matriz[i][i];
    }

    printf("A Soma da diagonal principal = %d\n", soma);

    return 0;
}