#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float numero;

    printf("Numero: ");
    scanf("%f", &numero);

    if (numero <= 0) {
        printf("Quadrado de %.2f: %.2f", numero, pow(numero, 2));
    }
    else {
        printf("Raiz quadrada de %.2f: %.2f", numero, sqrt(numero));
    }
    
    return 0;
}