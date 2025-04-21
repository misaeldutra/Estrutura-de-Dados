#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int i, j;

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("\nDiagonal secundaria: \n");
    for(i = 0; i < 3; i++){
        printf("%d ", matriz[i][2 - i]);
    }

    return 0;
}