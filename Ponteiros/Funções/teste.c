#include <stdio.h>
#include <stdlib.h>

void mostra_nome_programa(){ //funcao sem retorno e sem parametro;
    printf("\n----Calculadora----\n");
}

soma(int numero1,int numero2){ //funcao sem retorno e com parametro;
    int soma_valor = numero1 + numero2;
    printf("\nA soma dos numeros digitados = %d\n",soma_valor);
}

int subtracao(int n1,int n2); //prototipo

int multiplicacao();


int main(){
    int n1, n2;
    int res_subtracao, res_produto;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    mostra_nome_programa();

    soma(n1,n2);

    res_subtracao = subtracao(n1, n2);
    printf("A subtracao dos numeros digitados = %d\n", res_subtracao);

    res_produto = multiplicacao();

    printf("\nO produto = %d\n", res_produto);



    return 0;
}

int subtracao(int n1, int n2){ //funcao com retorno e com parametro;
    int resultado = n1 - n2;
    
    return resultado;
}

int multiplicacao(){ //funcao com retorno e sem parametro;
    int n1, n2;
    int resultado;

    printf("\nInforme outro numero para multiplicacao: ");
    scanf("%d", &n1);
    printf("Informe mais outro numero: ");
    scanf("%d", &n2);

    resultado = n1*n2;

    return resultado;
}