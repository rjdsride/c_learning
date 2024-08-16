#include<stdio.h>
#include<stdlib.h>

//aula 8 lendo caracteres com a func getc()

int main() {

    char letra;
    printf("Digite um caractere: ");
    letra = getc(stdin);

    printf("Caractere lido: %c\n", letra);
    
    return 0;
}
