#include <stdio.h>
#include <stdlib.h>

void somatorioMedia(float a[], int n, float *somatorio, float *media);

int main(void) {
    int tamanho = 10;
    float somatorio;
    float media;
    float array[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("n[%d]: ", i);
        scanf("%f", &array[i]);
    }

    somatorioMedia(array, tamanho, &somatorio, &media);

    printf("Somatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", media);

    return 0;
}

void somatorioMedia(float a[], int n, float *somatorio, float *media) {
    *somatorio = 0;
    
    for (int i = 0; i < n; i++) {
        *somatorio += a[i];
    }

    *media = *somatorio / n;
}