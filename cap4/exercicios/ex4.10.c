#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int numero;
    int maioresQueNumero = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Copiar maiores que: ");
    scanf("%d", &numero);

    for (int i = 0; i < 5; i++) {
        if (array[i] > numero) maioresQueNumero++;
    }

    if (maioresQueNumero == 0) {
        printf("Nao houve copia!");
        return 0;
    }

    int arrayCopia[maioresQueNumero];
    int numerosCopiados = 0;

    for (int i = 0; i < 5; i++) {
        if (array[i] > numero) {
            arrayCopia[numerosCopiados] = array[i];
            printf("arrayCopia[%d] = %d\n", numerosCopiados, arrayCopia[numerosCopiados]);
            numerosCopiados++;
        }
        if (numerosCopiados == maioresQueNumero) break;
    }
    
    return 0;
}