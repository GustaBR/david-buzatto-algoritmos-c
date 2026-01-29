#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int posicao;
    int a = 1;
    int b = 1;
    int termoEscolhido;

    printf("Termo desejado: ");
    scanf("%d", &posicao);

    if (posicao < 0) return 0;

    if (posicao == 0 || posicao == 1) {
        termoEscolhido = 1;
    }
    else {
        for (int i = 2; i <= posicao; i++) {
            if (a <= b) {
                a = a + b;
                termoEscolhido = a;
            }
            else {
                b = b + a;
                termoEscolhido = b;
            }
        }
    }

    printf("Fibonacci de %d e %d", posicao, termoEscolhido);
    
    return 0;
}