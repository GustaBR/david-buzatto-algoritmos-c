#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float largura;
    float altura;
    float perimetro;
    float area;

    // Entrada
    printf("Valor da largura: ");
    scanf("%f", &largura);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    // Processamento
    perimetro = 2 * (largura + altura);
    area = largura * altura;

    // Saída
    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);

    return 0;
}