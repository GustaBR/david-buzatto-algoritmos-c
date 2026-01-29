#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;
    int fatorial = 1;

    printf("Numero: ");
    scanf("%d", &numero);

    if (numero < 1) {
        printf("Nao ha fatorial de numero negativo.");
    }
    else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        
        printf("%d! = %d", numero, fatorial);
    }

    return 0;
}