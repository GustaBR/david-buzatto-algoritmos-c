#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a;
    float b;
    float c;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    if (a > b + c || b > a + c || c > a + c) {
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    } else if (a == b && b == c) {
        printf("Triangulo EQUILATERO");
    } else if (a == b || b == c || a == c) {
        printf("Triangulo ISOSCELES");
    } else {
        printf("Triangulo ESCALENO");
    }

    return 0;
}