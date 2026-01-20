#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float baseMaior;
    float baseMenor;
    float altura;
    float area;

    // Entrada
    printf("Valor da base maior: ");
    scanf("%f", &baseMaior);
    printf("Valor da base menor: ");
    scanf("%f", &baseMenor);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    // Processamento
    area = altura * (baseMaior + baseMenor) / 2;

    // Saída
    printf("Area = %.2f", area);

    return 0;
}