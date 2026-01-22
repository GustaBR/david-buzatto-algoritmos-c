#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;
    
    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &numero);

    if (numero > 3999 || numero < 1) {
        printf("Numero incorreto!");
        return 0;
    }

    printf("%d = ", numero);

    if (numero >= 3000) {
        printf("MMM");
        numero -= 3000;
    }
    if (numero >= 2000) {
        printf("MM");
        numero -= 2000;
    }
    if (numero >= 1000) {
        printf("M");
        numero -= 1000;
    }
    if (numero >= 900) {
        printf("CM");
        numero -= 900;
    }
    if (numero >= 500) {
        printf("D");
        numero -= 500;
    }
    if (numero >= 400) {
        printf("CD");
        numero -= 400;
    }
    if (numero >= 300) {
        printf("CCC");
        numero -= 300;
    }
    if (numero >= 200) {
        printf("CC");
        numero -= 200;
    }
    if (numero >= 100) {
        printf("C");
        numero -= 100;
    }
    if (numero >= 90) {
        printf("XC");
        numero -= 90;
    }
    if (numero >= 50) {
        printf("L");
        numero -= 50;
    }
    if (numero >= 40) {
        printf("XL");
        numero -= 40;
    }
    if (numero >= 30) {
        printf("XXX");
        numero -= 30;
    }
    if (numero >= 20) {
        printf("XX");
        numero -= 20;
    }
    if (numero >= 10) {
        printf("X");
        numero -= 10;
    }
    if (numero >= 9) {
        printf("IX");
        numero -= 9;
    }
    if (numero >= 5) {
        printf("V");
        numero -= 5;
    }
    if (numero == 4) {
        printf("IV");
        numero -= 4;
    }
    if (numero == 3) {
        printf("III");
        numero -= 3;
    }
    if (numero == 2) {
        printf("II");
        numero -= 2;
    }
    if (numero == 1) {
        printf("I");
        numero -= 1;
    }

    return 0;
}