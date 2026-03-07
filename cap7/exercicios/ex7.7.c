#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool ehPrimo(int numero);

int main(void) {
    for (int i = 1; i <= 20; i++) {
        printf("%d:", i); 
        if (!ehPrimo(i)) printf(" nao");
        printf(" eh primo\n");
    }
    
    return 0;
}

bool ehPrimo(int numero) {
    if (numero == 1) return false;

    int limite = floor(sqrt(numero));

    for (int i = 2; i <= limite; i++) {
        if (numero % i == 0) return false;
    }

    return true;
}