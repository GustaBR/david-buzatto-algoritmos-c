#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5] = {7, 3, 9, 1, 4};

    int menor;

    for (int i = 0; i < 5; i++) {
        menor = i;
        for (int j = i+1; j < 5; j++) {
            if (array[j] < array[menor]) {
                menor = j;
            }
        }
        int copia = array[i];
        array[i] = array[menor];
        array[menor] = copia;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}