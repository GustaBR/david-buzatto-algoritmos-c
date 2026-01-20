#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float valor;
    float valorComDesconto;

    // Entrada
    printf("Valor do produto: ");
    scanf("%f", &valor);

    // Processamento
    valorComDesconto = valor * 0.91;

    // Saída
    printf("Preco de venda com 9%% de desconto: %.2f", valorComDesconto);
    
    return 0;
}