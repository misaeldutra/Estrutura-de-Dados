#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[2][3];
    int i, j;

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        int somadalinha = 0;
        for(j = 0; j < 3; j++){
            somadalinha = somadalinha + matriz[i][j];
        }
        printf("\nSoma Linha %d: %d",i + 1, somadalinha);
    }



    return 0;
}