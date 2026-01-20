#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float lado;
    float perimetro;
    float area;

    // Entrada
    printf("Valor do lado: ");
    scanf("%f", &lado);

    // Processamento
    perimetro = 4* lado;
    area = lado * lado;

    // Saída
    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);
    
    return 0;
}