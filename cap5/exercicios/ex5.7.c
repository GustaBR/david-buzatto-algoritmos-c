#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array1[3][2];
    int array2[2][3];
    int arrayMult[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arrayMult[i][j] = array1[i][0] * array2[0][j] + array1[i][1] * array2[1][j];
        }
    }

    printf("\nA x B =\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) printf("%03d", arrayMult[i][j]);
            else printf("%03d ", arrayMult[i][j]);
        }
        printf("\n");
    }

    return 0;
}