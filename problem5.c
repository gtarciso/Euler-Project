#include <stdio.h>

int main () {
    int initial = 2520;
    int a = 0;
    while (a == 0) {
        int aux = 0;
        int i;
        for (i = 2; i<=20; i++) {
            if (initial%i == 0) {
                aux++;
            }
        }
        if (aux == 19) {
            printf ("%d\n", initial);
            a = 1;
        }
        initial+=2;
    }
    return 0;
}

