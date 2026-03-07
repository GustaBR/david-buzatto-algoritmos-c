#include <stdio.h>
#include <stdlib.h>

int absoluto(int n1);

int main(void) {
    int array[5];

    for (int i = 0; i < 5; i++) {
        printf("n%d: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("absoluto(%d) = %d\n", array[i], absoluto(array[i]));
    }

    return 0;
}

int absoluto(int n1) {
    if (n1 < 0) n1 = -n1;
    return n1;
}