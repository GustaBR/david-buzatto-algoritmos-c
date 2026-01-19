#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float pi = 3.1415;
    float raio = 20.78;
    float circunferencia = 2 * pi * raio;
    float area = pi * raio * raio;

    printf("O circulo de raio %f tem:\n");
    printf("\tCircunferencia = %.2f", circunferencia);
    printf("\tArea = %.2f", area);

    return 0;
}

/*
 * Este programa produz um aviso
 * que diz que o placeholder do
 * primeiro printf esperava uma
 * variável do tipo double, em vez
 * de uma do tipo float, como é o
 * caso da variável "raio".
 */