#include <stdio.h>

#define MAX_VALUE 4000000

int indice = 0;
int vetor[1000];
int aux1 = 1, aux2 = 1;

void fibonacci (int value1, int value2) {
    int aux;
    aux = value1;
    value1 = aux+value2;
    value2 = aux;
    vetor[indice] = value1;
    indice++;
    if (value1 <= MAX_VALUE) {
        fibonacci (value1, value2);
    }
    else return;
}

int main () {
    fibonacci (aux1, aux2);
    int soma = 0;
    int i;
    for (i = 0; i <= indice; i++) {
        if (vetor[i]%2 == 0) {
            soma += vetor[i];
        }
    }
    printf ("%d\n", soma);
    return 0;
}

