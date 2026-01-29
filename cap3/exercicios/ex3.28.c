#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int quantidade = 1;
    float peso;
    float somatorioAcimaDe60 = 0;
    float quantidadeAcimaDe60 = 0;
    float mediaAcimaDe60 = 0;
    float maiorPeso = 0;
    
    do {
        printf("Entre com o peso da pessoa %02d: ", quantidade);
        scanf("%f", &peso);

        if (peso < 0) break;

        if (peso > 60) {
            somatorioAcimaDe60 += peso;
            quantidadeAcimaDe60++;
        }
        if (peso > maiorPeso) maiorPeso = peso;

        quantidade++;
    } while (peso >= 0);

    if (quantidadeAcimaDe60 > 0) {
        mediaAcimaDe60 = somatorioAcimaDe60 / quantidadeAcimaDe60;
    }

    printf("Media dos pesos acima de 60kg: %.2f\n", mediaAcimaDe60);
    printf("A pessoa mais pesada possui %.2fkg", maiorPeso);

    return 0;
}