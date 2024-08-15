#include <stdio.h>

//aula 4 - LENDO NUMEROS INTEIROS
int main() {
    int valor, valor2;//criando uma variavel para guardar um valor do tipo inteiro
    
    //atribuindo - > atribuindo valor a uma variavel
    valor = 50;
    
    printf("Digite um valor inteiro : ");
    scanf("%d", &valor);
    
    printf("Digite um segundo valor inteiro : ");
    scanf("%d", &valor2);
    
    printf("\n\nPrimeiro valor : %d\nSegundovalor: %d\n\n", valor, valor2);
    
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();
    return 0;
}
