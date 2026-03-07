#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPar(int n);

bool ehDivisivel(int dividendo, int divisor);

int main(void) {
    int array[5][2];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("n%d[%d]: ", j+1, i);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i][0]);

        printf("eh ");

        if (!ehPar(array[i][0])) printf("im");

        printf("par e %d ", array[i][0]);

        if (!ehDivisivel(array[i][0], array[i][1])) printf("nao ");

        printf("eh divisivel por %d\n", array[i][1]);
    }

    return 0;
}

bool ehPar(int n) {
    return n % 2 == 0;
}

bool ehDivisivel(int dividendo, int divisor) {
    return dividendo % divisor == 0;
}