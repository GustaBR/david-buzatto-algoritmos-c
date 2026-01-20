#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int baseMaior;
    int baseMenor;
    int altura;
    int area;

    // Entrada
    printf("Valor da base maior: ");
    scanf("%d", &baseMaior);
    printf("Valor da base menor: ");
    scanf("%d", &baseMenor);
    printf("Valor da base menor: ");
    scanf("%d", &altura);

    // Processamento
    area = altura * (baseMaior + baseMenor) / 2;

    // Saída
    printf("Area = %d", area);

    return 0;
}