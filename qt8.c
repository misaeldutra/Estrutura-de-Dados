#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int i , j;
    int soma = 0;

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(j > i){
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("\nSoma acima da diagonal principal: %d\n", soma);

    return 0;
}