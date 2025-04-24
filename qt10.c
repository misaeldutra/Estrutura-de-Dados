#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int i, j;
    int identidade = 1; //duvida sobre essa quest. "Precisa necessariamente declarar essa variavel?"

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            if((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)){
                identidade = 0;
            }
        }
    }

    if(identidade){
        printf("\nA matriz e Identidade\n");
    } else{
        printf("\nA matriz nao e identidade\n");
    }

    return 0;
}