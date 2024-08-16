#include<stdio.h>
#include<stdlib.h>

// Aula 9 lendo caracteres funcao fgetc();

int main () {
    
    char letra;

    printf("Digite uma letra: ");
    letra = fgetc(stdin);
    printf("A letra digitada foi %c\n", letra);
    
}
