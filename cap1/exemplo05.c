#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeroInteiro1 = 9;
    int numeroInteiro2 = 2;

    float numeroDecimal1 = 9;
    float numeroDecimal2 = 2;

    // Divisão inteira (resulta em 4)
    int divisaoInteira = numeroInteiro1 / numeroInteiro2;

    // Divisão decimal (resulta em 4.5)
    float divisaoDecimal = numeroDecimal1 / numeroDecimal2;

    printf("Inteiros: %d / %d = %d\n",
    numeroInteiro1, numeroInteiro2, divisaoInteira);
    printf("Decimais: %f / %f = %f\n",
    numeroDecimal1, numeroDecimal2, divisaoDecimal);

    return 0;
}