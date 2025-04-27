#include <stdio.h>
#include <stdlib.h>

int soma(int *vetor, int tam){ //funcao com retorno e parametro;
    int *ptr = vetor;
    int i, total = 0;

    for(i = 0; i < tam; i++){
        total = total + *ptr;
        
        ptr++;
    }

    return total;

}

int main(){
    int vetor[6];
    int i, resultsoma;

    printf("Informe os elementos do vetor: \n");
    for(i = 0; i < 6; i++){
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    resultsoma = soma(vetor, 6);

    printf("\nA soma dos elementos do vetor = %d\n", resultsoma);


    return 0;
}