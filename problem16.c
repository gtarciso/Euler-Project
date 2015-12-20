#include <stdio.h>

#define MAX_VALUE 1000 
#define SIZE_ARRAY 1000000

void potenciaDeDois(int indice);

int size = SIZE_ARRAY-1;
int soma = 0;
int potencia[1000000];

int main() {
    potencia[size] = 2;
    int indice;
    for(int i = 1; i < MAX_VALUE; i++) {
        indice = size;
        potenciaDeDois(indice);
    }
    for(int i = size; i < SIZE_ARRAY; i++) {
        soma = soma + potencia[i];
    }
    printf("%d\n", soma);
    return 0;
}

void potenciaDeDois(int indice) {
    for(int i = SIZE_ARRAY-1; i >= indice; i--) {
        potencia[i] = potencia[i]*2;
    }
    for(int i = SIZE_ARRAY-1; i >= indice; i--) {
       if (potencia[i] > 9) {
            potencia[i] = potencia[i] - 10;
            potencia[i-1] = potencia[i-1] + 1;
        }
    }
    if(potencia[indice-1] > 0) {
        size = size - 1;
    }
}
