#include<stdio.h>
#include<stdlib.h>

// aula 18
// tamanho de um int na memoria
// intevalo -2.147.483.648 2.147.483.648 
//%d

int main() {

    int x = 2147483647;

    //printf("Tamanho de um int na memoria: %d bytes\n", sizeof y);
    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);
    printf("Tamanho em memoria de short int: %d bytes\n", sizeof(x));

    return 0;
}
