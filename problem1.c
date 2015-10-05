#include <stdio.h>

#define MAX_NUMBER 1000

int main () {
    int i = 3;
    int value = 0;
    while (i < MAX_NUMBER) {
        if (i % 3 == 0 || i % 5 == 0) {
            value += i;
        }
        i++;
    }
    printf ("%d\n", value);
    return 0;
}

