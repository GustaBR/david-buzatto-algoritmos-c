#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int indices[5] = { 0 };
    int numero;
    int indicesAExibir = 0;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &numero);

    for (int i = 0; i < 5; i++) {
        if (numero == array[i]) {
            indicesAExibir++;
            indices[i] = 1;
        }
    }

    if (indicesAExibir == 0) {
        printf("O array nao contem o valor %d.", numero);
        return 0;
    }
    
    printf("O valor %d foi encontrado ", numero);
    if (indicesAExibir == 1) printf("no indice ");
    else printf("nos indices ");

    for (int i = 0; i < 5; i++) {
        if (indices[i] == 0) continue;
        if (indicesAExibir > 2) printf("%d, ", i);
        else if (indicesAExibir == 2) printf("%d e ", i);
        else printf("%d do array.", i);
        indicesAExibir--;
    }
    
    return 0;
}