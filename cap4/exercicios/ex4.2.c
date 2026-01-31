#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int arrayMult[5];
    int multiplicador;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Multiplicar por: ");
    scanf("%d", &multiplicador);

    for (int i = 0; i < 5; i++) {
        arrayMult[i] = array[i] * multiplicador;
        printf("arrayMult[%d] = %d\n", i, arrayMult[i]);
    }

    return 0;
}