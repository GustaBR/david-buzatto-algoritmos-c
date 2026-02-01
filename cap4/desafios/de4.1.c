#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[10];
    int paresCrescente[10];
    int qtdPares = 0;
    int imparesDecrescente[10];
    int qtdImpares = 0;

    for (int i = 0; i < 10; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            int indiceDoPrimeiroMaior = qtdPares;

            for (int j = 0; j < qtdPares; j++) {
                if (paresCrescente[j] > array[i]) {
                    indiceDoPrimeiroMaior = j;
                    break;
                }
            }

            for (int j = qtdPares-1; j >= indiceDoPrimeiroMaior; j--) {
                paresCrescente[j+1] = paresCrescente[j]; 
            }

            paresCrescente[indiceDoPrimeiroMaior] = array[i];
            qtdPares++;
        }
        else {
            int indiceDoPrimeiroMenor = qtdImpares;

            for (int j = 0; j < qtdImpares; j++) {
                if (imparesDecrescente[j] < array[i]) {
                    indiceDoPrimeiroMenor = j;
                    break;
                }
            }

            for (int j = qtdImpares-1; j >= indiceDoPrimeiroMenor; j--) {
                imparesDecrescente[j+1] = imparesDecrescente[j];
            }

            imparesDecrescente[indiceDoPrimeiroMenor] = array[i];
            qtdImpares++;
        }
    }

    printf("Valores pares em ordem crescente:");

    if (qtdPares == 0) printf(" nao ha");
    else {
        for (int i = 0; i < qtdPares; i++) {
            printf(" %d", paresCrescente[i]);
        }
    }
    printf(".\n");
    
    printf("Valores impares em ordem decrescente:");

    if (qtdImpares == 0) printf(" nao ha");
    else {
        for (int i = 0; i < qtdImpares; i++) {
            printf(" %d", imparesDecrescente[i]);
        }
    }
    printf(".");

    return 0;
}