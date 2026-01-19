#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int lado;
    int perimetro;
    int area;

    // Entrada
    printf("Valor do lado: ");
    scanf("%d", &lado);

    // Processamento
    perimetro = 4 * lado;
    area = lado * lado;

    // Saída
    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);

    return 0;
}