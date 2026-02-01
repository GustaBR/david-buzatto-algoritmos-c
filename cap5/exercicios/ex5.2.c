#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array1[3][3];
    int array2[3][3];
    int arraySoma[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arraySoma[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printf("\narray1:       array2:       arraySoma:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%03d ", array1[i][j]);
        }

        i == 1 ? printf("+ ") : printf("  ");

        for (int j = 0; j < 3; j++) {
            printf("%03d ", array2[i][j]);
        }

        i == 1 ? printf("= ") : printf("  "); 

        for (int j = 0; j < 3; j++) {
            if (j == 2) printf("%03d", arraySoma[i][j]);
            else printf("%03d ", arraySoma[i][j]);
        }

        printf("\n");
    }
    
    return 0;
}