#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int lados;
    float medida;

    printf("Entre com a quantidade de lados: ");
    scanf("%d", &lados);

    printf("Entre com a medida do lado: ");
    scanf("%f", &medida);

    if (lados == 3) {
        float perimetro;
        perimetro = lados * medida;

        printf("TRIANGULO de perimetro %.2f", perimetro);
    }
    else if (lados == 4) {
        float area;
        area = medida * medida;
        
        printf("QUADRADO de area %.2f", area);
    }
    else if (lados == 5) {
        printf("PENTAGONO");
    }
    else {
        printf("Poligono nao identificado");   
    }

    return 0;
}