#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[10];
    int primeiroIndicePar = -1;
    int valorAtual;
    int ultimoIndiceImpar;

    for (int i = 0; i < 10; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0 && primeiroIndicePar < 0) {
            primeiroIndicePar = i;
        }
        if (primeiroIndicePar < 0) continue;
        if (array[i] % 2 != 0 && i > primeiroIndicePar) {
            valorAtual = array[i];
            for (int j = i; j > primeiroIndicePar; j--) {
                array[j] = array[j-1];
            }
            array[primeiroIndicePar] = valorAtual;
            primeiroIndicePar++;
        }
    }

    if (primeiroIndicePar < 0) ultimoIndiceImpar = 9;
    else ultimoIndiceImpar = primeiroIndicePar - 1;

    for (int i = 0; i <= ultimoIndiceImpar; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

// Eu entendi errado a premissa e restrições do exercício.
// Por isso, a resolução é bem mais complicada do que deveria ser.