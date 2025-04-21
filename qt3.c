#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4];
    
    int maior = 0;
    int lin = 0, col = 0;
    int i, j;

    printf("Informe os elementos: \n ");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if( matriz[i][j] > maior){
                maior = matriz[i][j];

                lin = i;
                col = j;
            }
        }
    }

    printf("\nMaior elemento: %d\n", maior);

    printf("Posicao: [%d][%d]\n", lin, col);





    return 0;
}