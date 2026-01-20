#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int segundosTotal;
    int segundos;
    int minutos;
    int horas;

    // Entrada
    printf("Quantidade de segundos: ");
    scanf("%d", &segundosTotal);

    // Processamento
    segundos = segundosTotal % 60;
    minutos = (segundosTotal / 60) % 60;
    horas = segundosTotal / 3600;

    // Saída
    printf("%d segundo(s) correspondem a %d hora(s), %d minuto(s) e %d segundos(s)", segundosTotal, horas, minutos, segundos);
    return 0;
}