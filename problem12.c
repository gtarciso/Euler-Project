#include <stdio.h>
#include <math.h>

#define MAX_NUMBER 500

void calculaMDC(int numero, int verificador);
int calculaQuantDivisores();
int verificaPrimo(int numero);

int divisores[1000];
int indice;
int cont;

int main() {
    int triangular = 0;
    for (int i = 0; i <= 2*MAX_NUMBER; i++) {
        triangular += i;
    }
    int aux = 0;
    int j = 2*MAX_NUMBER;
    while ( aux < MAX_NUMBER) {
        cont = 0;
        indice = -1;
        int y = 0;
        y = verificaPrimo(triangular);
        if (y == 1) {
            calculaMDC(triangular, 1);
            aux = calculaQuantDivisores();
        }
        j++;
        if (aux < MAX_NUMBER) {
            triangular += j;
        } else {
           break;
        }
        aux = 0;
    }
    printf("\n%d \n\n", triangular);
    return 0;
}

void calculaMDC(int numero, int verificador) {
    if(numero == 1) {
        return;
    }
    int j;
    for (int i = 2; i <= numero; i++) {
        if (numero % i == 0) {
            indice++;
            j = numero/i;
            divisores[indice] = i;
            if (verificador != i) {
                cont++;
            }
            calculaMDC(j, i);
            break;
        }
    }
}

int calculaQuantDivisores() {
    int arrayAux[cont];
    for (int i = 0; i < cont; i++) {
        arrayAux[i] = 1;
    }
    int k = 0, numDivisores = 1;
    arrayAux[0] = 2;
    for(int i = 1; i <= indice; i++) {
        if(divisores[i-1] == divisores[i]) {
            arrayAux[k] = arrayAux[k] + 1;
        } else {
            k++;
            arrayAux[k] = arrayAux[k] + 1;
        }
    }
    for (int i = 0; i < cont; i++) {
        numDivisores = numDivisores * (arrayAux[i]);
    }
    return numDivisores;
}

int verificaPrimo(int numero) {
    int x = 0;
    if (numero % 2 == 0) {
       return 1;
    }
    int y = sqrt(numero);
    for (int i = 3; i <= y; i += 2) {
        if (numero % i == 0) {
            x = 1;
        }
    }
    return x;
}
