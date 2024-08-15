#include <stdio.h>

//aula 6 - LENDO CARACTERES
int main() {
    
    char sexo = 'k';
    
    printf("Valor da minha variavel sexo: %.c\n ",sexo);

    printf("Digite seu sexo: (f, F, m ou M)");
    scanf("%c", &sexo);
    
    printf("Valor lido: %c", sexo);
    
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();
    return 0;
}
