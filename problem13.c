#include <stdio.h>

/*
    Como o C não lida bem com números muito grandes, usei uma gambiarra
    para somar os números enormes desse problema em questão usando um
    vetor de inteiros e somando cada algarismo do número separadamente

    aux = vetor auxiliar para guardar os números a serem somados em cada
    rodada

*/

int main () {
    int indice = 449;
    int soma[500];
    int aux [50];
    char xd[50];
    int i, j, k;
    for (i = 0; i < 500; i++) {
        soma[i] = 0;
    }
    for (i = 0; i < 100; i++) {
        for(j = 0; j < 50; j++) {
            scanf("%c", &xd[j]);
        }
        for(j = 0, k = 0; k < 50; j++) {
            int x = ((int)xd[j])-48;
            if(x >= 0) {
                aux [k] = x;
                k++;
            }
        }
        for(j = 49, k = 499; j >= 0; j--, k--) {
            int x = soma[k] + aux [j];
            soma[k] = x;
            if (x > 9) {
                soma[k] = soma[k] % 10;
                soma[k-1] = soma[k-1]+1;
            }
        }
        for (int j = 499; j >= indice; j--) {
            if(soma[j] > 9) {
                soma[j] = soma[j]%10;
                soma[j-1] = soma[j-1] + 1;
                if( indice == j) {
                    indice--;
                }
            }
        }
    }
    printf("\n");
    for (i = indice; i < (indice+10); i++) {
        printf("%d", soma[i]);
    }
    printf("\n");
    return 0;
}
