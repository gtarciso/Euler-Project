#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conversion (int n);

char str[6];

int main () {
    int aux, maior = 0;
    int i, j;
    for (i = 100; i < 999; i++) {
        for (j = 100; j < 999; j++) {
            conversion((j*i));
            aux = j*i;
            if (str[0] == str [5] &&
                str[1] == str [4] &&
                str[2] == str [3] &&
                aux > maior) {
                maior = aux;
            }
        }
    }
    printf ("%d\n", maior);
    return 0;
}
/* ugly as fuck, but works :^)*/
void conversion (int n) {
    str[0] = (char)(n/100000);
    str[1] = (char)(n/10000 - str[0]*10);
    str[2] = (char)(n/1000 - str[0]*100 - str[1]*10);
    str[3] = (char)(n/100 - str[0]*1000 - str[1]*100 - str[2]*10);
    str[4] = (char)(n/10 - str[0]*10000 - str[1]*1000 - str[2]*100 - str[3]*10);
    str[5] = (char)(n - str[0]*100000 - str[1]*10000 - str[2]*1000 - str[3]*100 - str[4]*10);
}
