#include <stdio.h>
#include <stdlib.h>

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg);

int main(void) {
    int horas;
    int minutos;
    int seg;
    int totalSeg;

    printf("Total de segundos: ");
    scanf("%d", &totalSeg);
    decompoeTempo(totalSeg, &horas, &minutos, &seg);

    printf("%d segundo(s) corresponde(m) a:\n", totalSeg);
    printf("    %d hora(s)\n", horas);
    printf("    %d minuto(s)\n", minutos);
    printf("    %d segundo(s)\n", seg);

    return 0;
}

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg) {
    *horas = totalSeg / 3600;
    *minutos = (totalSeg / 60) % 60;
    *seg = totalSeg % 60;
}