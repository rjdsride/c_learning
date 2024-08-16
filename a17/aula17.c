#include<stdio.h>
#include<stdlib.h>

// aula 17 operador short para o tipo int
//intervalo : -32.768 ate 32767
//%hi ou %d

int main() {

    int y = 0;
    short int x = 32767;

    //printf("Tamanho de um int na memoria: %d bytes\n", sizeof y);
    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x);
    printf("Tamanho em memoria de short int: %d bytes\n", sizeof(x));

    return 0;
}
