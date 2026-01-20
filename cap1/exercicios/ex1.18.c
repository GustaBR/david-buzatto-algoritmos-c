#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float diagonalMaior;
    float diagonalMenor;
    float area;

    // Entrada
    printf("Valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);
    printf("Valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    // Processamento
    area = diagonalMaior * diagonalMenor / 2;

    // Saída
    printf("Area = %.2f", area);
    
    return 0;
}