#include <stdio.h>

#define MAX_VALUE 1000000

int collatz(long int number);

int maior;
long long int maiorNum;
long long int aux;

int main() {
    maiorNum = 0;
    maior = 0;

    for (int i = 2; i < MAX_VALUE; i++) {
        aux = collatz(i);
        if (aux > maior) {
            maior = aux;
            maiorNum = i;
        }
    }
    printf("%ld %d\n", maiorNum, maior);
    return 0;
}

int collatz(long int number) {
    int cont = 1;
    while( number != 1) {
        if(number % 2 == 0) {
            number = number/2;
            cont = cont + 1;
        }
        else {
            number = ((number * 3) + 1);
            cont = cont + 1;
        }
        if (number == 1) {
            return cont;
        }
    }
    return cont;
}

