#include <stdio.h>
#include <stdlib.h>

void somaproduto(int *n1, int *n2, int *s, int *p){
    *s = *n1 + *n2;
    *p = (*n1) * (*n2);
}

int main(){
    int n1, n2;
    int soma = 0;
    int produto = 0;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);

    somaproduto(&n1, &n2, &soma, &produto);

    printf("\nA soma dos numeros %d e %d = %d\n",n1, n2, soma);
    printf("O produto dos numeros %d e %d = %d\n", n1, n2, produto);

    return 0;
}