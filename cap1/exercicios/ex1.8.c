#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int largura;
    int altura;
    int perimetro;
    int area;

    // Entrada
    printf("Valor da largura: ");
    scanf("%d", &largura);
    printf("Valor da altura: ");
    scanf("%d", &altura);

    // Processamento
    perimetro = 2 * (largura + altura);
    area = largura * altura;

    // Saída
    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);
    
    return 0;
}