#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c;
    for (a = 1; a < 998; a++){
        for (b= a+1 ;b < 998; b++) {
            int c = sqrt((a*a)+(b*b));
            if ((a+b+c) == 1000 && ((a*a)+(b*b)==(c*c))) {
                printf ("%d, %d, %d\n", a, b, c);
                printf ("%d\n", (a*b*c));
            }
        }
    }
    return 0;
}
