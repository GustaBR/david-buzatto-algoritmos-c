#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float pi = 3.141592;
    float raio;
    float diametro;
    float circunferencia;
    float area;

    // Entrada
    printf("Valor do raio do ciruclo: ");
    scanf("%f", &raio);

    // Processamento
    diametro = 2 * raio;
    circunferencia = 2 * pi * raio;
    area = pi * raio * raio;

    // Saída
    printf("Diametro = %.2f\n", diametro);
    printf("Circunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f", area);
    
    return 0;
}