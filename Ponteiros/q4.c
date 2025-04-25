#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5];
    int i;
    int *ptr = vetor;

    printf("Informe os elementos do vetor: \n");
    for(i = 0; i < 5; i++){
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nOs elementos do vetor: \n");
    for(i = 0; i < 5; i++){
        printf("%d ", *(ptr + i)); //pra andar as casas do vetor
    }

    return 0;
}