#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade = 30;

    int *ponteiro_idade = &idade;

    printf("Idade: %d\n", idade); //conteudo da variavel idade
    printf("&idade: %p\n", &idade); //endereco da variavel idade
    printf("ponteiro_idade: %p\n", ponteiro_idade); //endereco de onde ponteiro aponta
    printf("ponteiro_idade: %d\n", *ponteiro_idade); //conteudo da varivel que ponteiro aponta
    printf("&ponteiro_idade: %p\n", &ponteiro_idade);//endereco do ponteiro em si
    
    return 0;
}