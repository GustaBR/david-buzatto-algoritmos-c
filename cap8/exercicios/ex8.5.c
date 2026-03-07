#include <stdio.h>
#include <stdlib.h>

int busca(int *a, int tamanho, int valor);

int main(void) {
    int tamanho = 10;
    int array[tamanho];
    int valor;

    for (int i = 0; i < tamanho; i++) {
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &valor);
    int indice = busca(array, tamanho, valor);

    if (indice == -1) printf("O valor %d nao foi encontrado.\n", valor);
    else printf("O valor %d foi encontrado na posicao %d.\n", valor, indice);

    return 0;
}

int busca(int *a, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (*(a+i) == valor) {
            return i;
        }
    }
    return -1;
}
