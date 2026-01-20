#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float base;
    float altura;
    float area;

    // Entrada
    printf("Valor da base: ");
    scanf("%f", &base);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    // Processamento
    area = base * altura / 2;

    // Saída
    printf("Area = %.2f", area);
    
    return 0;
}