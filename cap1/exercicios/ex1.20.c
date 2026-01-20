#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1;
    int n2;
    int media;

    // Entrada
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);

    // Processamento
    media = (n1 + n2) / 2;
    
    // Saída
    printf("Media aritmetica: %d", media);
    
    return 0;
}