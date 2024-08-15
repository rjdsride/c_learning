#include <stdio.h>

//aula 5 - LENDO NUMEROS REAIS
int main() {
    float num = 3.1415;
    
    printf("Valor da minha variavel: %.2f\n ",num);

    printf("Digite um numero real: ");
    scanf("%f", &num);
    
    printf("Valor lido: %.3f", num);
    
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();
    return 0;
}
