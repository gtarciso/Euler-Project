#include <stdio.h>
#include <math.h>

#define MAX_VALUE 600851475143

int main () {
    int maior;
    int indice = 0;
    int i = 3;
    int a = 0;
    while (i < 30000) {
        int reference = sqrt(i);
        int j;
        for (j = 3; j <= reference; j+=2) {
            if (i%j == 0) {
                a = 1;
                j = sqrt(i);
            }
        }
        if (a < 1) {
            if (MAX_VALUE%i == 0) {
                maior = i;
            }
        }
        a = 0;
        i+=2;
    }
    printf("%d\n", maior);
}


