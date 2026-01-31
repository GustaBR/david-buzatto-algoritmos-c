#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array1[5];
    int elementos1 = 1;
    int array2[5];
    int elementos2 = 1;
    int arrayInterseccao[5];
    int elementosInterseccao = 0;
    int valorUnico;

    printf("Forneca os valores do primeiro array:\n");
    for (int i = 0; i < 5; i++) {
        printf("\tarray1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("\nForneca os valores do segundo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("\tarray2[%d]: ", i);
        scanf("%d", &array2[i]);
    }
    
    valorUnico = array1[0];
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < elementos1; j++) {
            if (array1[i] == array1[j]) {
                valorUnico = array1[j];
                break;
            }
        }
        if (array1[i] != valorUnico) {
            array1[elementos1] = array1[i];
            elementos1++;
        }
    }

    valorUnico = array2[0];
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < elementos2; j++) {
            if (array2[i] == array2[j]) {
                valorUnico = array2[j];
                break;
            }
        }
        if (array2[i] != valorUnico) {
            array2[elementos2] = array2[i];
            elementos2++;
        }
    }

    for (int i = 0; i < elementos1; i++) {
        for (int j = 0; j < elementos2; j++) {
            if (array1[i] == array2[j]) {
                arrayInterseccao[elementosInterseccao] = array1[i];
                elementosInterseccao++;
            }
        }
    }

    if (elementosInterseccao == 0) printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!");
    else {
        for (int i = 0; i < elementosInterseccao; i++) {
            printf("arrayInterseccao[%d] = %d\n", i, arrayInterseccao[i]);
        }
    }

    return 0;
}