#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float peso;
    float altura;
    float IMC;

    // Entrada
    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Entre com sua altura em metros: ");
    scanf("%f", &altura);

    // Processamento
    IMC = peso / (altura * altura);

    // Saída
    printf("Seu IMC e: %.2f", IMC);
    
    return 0;
}