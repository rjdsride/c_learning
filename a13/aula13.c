#include<stdio.h>
#include<stdlib.h>

//aula 13 ler 2 caracteres

int main () {
    char a, b;

    printf("Digite duas letras");
    scanf("%c %c", &a, &b);
    //espaco entre os %c -> comando para  o computador desconsiderar o ENTER, TAB e o ESPACO
 


    printf("Primeira letra %c/nSegunda linha %c\n", a, b);
    return 0;
}
