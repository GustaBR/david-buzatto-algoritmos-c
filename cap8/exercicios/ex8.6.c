#include <stdio.h>
#include <stdlib.h>

void pInterno(const double *a1, const double *a2, double *pi, int tamanho);

int main(void) {
    int tamanho = 5;
    double array1[tamanho];
    double array2[tamanho];
    double pi[tamanho];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("a%d[%d]: ", i+1, j);
            if (i == 0) scanf("%lf", &array1[j]);
            else if (i == 1) scanf("%lf", &array2[j]);
        }
    }

    pInterno(array1, array2, pi, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf(
            "%.2lf x %.2lf = %.2lf\n",
            array1[i],
            array2[i],
            pi[i]
        );
    }

    return 0;
}

void pInterno(const double *a1, const double *a2, double *pi, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(pi+i) = *(a1+i) * *(a2+i);
    }
}