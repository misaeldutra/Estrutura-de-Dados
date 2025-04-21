#include <stdio.h>
#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos pares: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0){
                printf("%d ", matriz[i][j]);
            }
        }
    }


    return 0;
}