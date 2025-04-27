#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5];
    int i;
    int *ptr;

    printf("Informe os elementos do vetor: \n");
    for(i = 0; i < 5; i++){
        printf("Elemento[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    ptr = vetor + 4; //para ir para o ultima posicao 


    printf("\nvetor invertido: \n");
    for(i = 0; i < 5; i++){
        
        printf("%d ", *ptr);
        ptr--; //para inverter;
    }

    return 0;
}