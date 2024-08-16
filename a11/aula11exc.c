#include <stdio.h>
#include <string.h>

int main () {
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite o seu sexo: [M]asculino ou [F]eminino:\n ");
    scanf("%c", &sexo);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Sexo: %c\nIdade: %d\nAltura: %.2f\nPeso: %.2f\n", sexo, idade, peso, altura);

    return 0;
}
