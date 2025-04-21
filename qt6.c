#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int i, j;
    int num;

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nInforme o numero que deseja para multiplicar: \n");
    scanf("%d", &num);

    printf("\nMatriz resultante da Multiplicacao: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j] * num);
        }
        printf("\n");
    }




    return 0;
}