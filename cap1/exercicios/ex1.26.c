#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float tC;
    float tF;

    // Entrada
    printf("Temperatura em graus Celsius: ");
    scanf("%f", &tC);

    // Processamento
    tF = tC * 1.8 + 32;

    // Saída
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", tC, tF);
    return 0;
}