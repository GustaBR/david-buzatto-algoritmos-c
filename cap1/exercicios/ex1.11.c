#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int diagonalMaior;
    int diagonalMenor;
    int area;

    // Entrada
    printf("Valor da diagonal maior: ");
    scanf("%d", &diagonalMaior);
    printf("Valor da diagonal menor: ");
    scanf("%d", &diagonalMenor);

    // Processamento
    area = diagonalMaior * diagonalMenor / 2;

    // Saída
    printf("Area = %d", area);

    return 0;
}