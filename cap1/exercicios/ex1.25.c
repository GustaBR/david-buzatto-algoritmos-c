#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float tF;
    float tC;

    // Entrada
    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &tF);

    // Processamento
    tC = (tF - 32) / 1.8;

    // Saída
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", tF, tC);
    return 0;
}