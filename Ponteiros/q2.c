#include <stdio.h>
#include <stdlib.h>

void Troca(int *n1, int *n2){
    int vazio;

    vazio = *n1;
    
    *n1 = *n2;
    *n2 = vazio;
}

int main(){
    int n1, n2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);

    printf("\nantes: n1 = %d e n2 = %d\n", n1, n2);

    Troca(&n1, &n2);

    printf("depois: n1 = %d e n2 = %d", n1, n2);

    return 0;
}