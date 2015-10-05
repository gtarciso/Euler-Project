#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define MAX_VALUE 2000000

int main () {
    int i = 11;
    uint64_t soma = 17;
    int a = 0;
    while (i < MAX_VALUE) {
        int reference = sqrt(i);
        int j;
        for (j = 3; j <= reference; j+=2) {
            if (i%j == 0) {
                a = 1;
                j = sqrt(i);
            }
        }
        if (a < 1) {
            soma += i;
        }
        a = 0;
        i+=2;
    }
    printf ("%ld\n", soma);
    return 0;
}

    
