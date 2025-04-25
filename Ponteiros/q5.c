#include <stdio.h>
#include <stdlib.h>


int main(){
    int vetor[5];
    int *maior;
    int i;

    printf("Informe os elementos do vetor: \n");
    for(i = 0; i < 5; i++){
        printf("Elemento[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    maior = &vetor[0];

    for(i = 0; i < 5; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
    }

    printf("\nO maior elemento do vetor = %d\n", *maior);
    

    return 0;
}