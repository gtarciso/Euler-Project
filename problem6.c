#include <stdio.h>

#define MAX_VALUE 100

int main () {
    int somaquad = 0;
    int quadsoma = 0;
    int j;
    for (j = 1; j <= MAX_VALUE; j++) {
        somaquad += j*j;
        quadsoma += j;
    }
    int aux = quadsoma;
    quadsoma = aux*aux;
    printf ("%d\n", (quadsoma-somaquad));
    return 0;
}

