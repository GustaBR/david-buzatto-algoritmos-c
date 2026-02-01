#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[2][3];
    int arrayTransposto[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arrayTransposto[j][i] = array[i][j];
        }
    }

    printf("M:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) printf("%03d", array[i][j]);
            else printf("%03d ", array[i][j]);
        }
        printf("\n");
    }

    printf("\nMt:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 1) printf("%03d", arrayTransposto[i][j]);
            else printf("%03d ", arrayTransposto[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}