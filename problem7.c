#include <stdio.h>
#include <math.h>

#define MAX_VALUE 10001

int main () {
    int greater = 3;
    int i = 2;
    int aux = greater;
    int a = 0;
    while ( i < 10001) {
        aux+=2;
        int reference = sqrt(aux);
        int j;
        for (int j = 3; j <= reference; j+=2) {
            if (aux%j == 0) {
                a=1;
                j = sqrt(aux);
            }
        }
        if (a < 1) {
            greater = aux;
            i++;
        }
        a = 0;
    }
    printf ("%d\n", greater);
}
