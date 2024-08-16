#include<stdio.h>
#include<stdlib.h>

// aula 14 limpeza do buffer do teclado
int main () {
    
    char a, b;

    printf("Digite uma letra");
    scanf("%c", &a);

    scanf("%c");// voce pode utilizar isso sem salvar na variavel*
    // ou pode utilizar espaço
    // de espaço por causa do buffer do teclado

    printf("Digite outra letra");
    scanf(" %c", &b);


}

