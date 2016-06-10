#include <stdio.h>

#define MAX 1000 

void fibo(int matrix[MAX]);

int main() {
  int matrix[MAX];
  int i;
  for(i = 0; i < MAX; i++) {
    matrix[i] = 0;
  }
  fibo(matrix);
  return 0;
}

void fibo(int matrix[MAX]) {
  int aux1[MAX];
  int aux2[MAX];
  int i;
  for(i = 0; i < MAX; i++) {
    aux1[i] = 0;
    aux2[i] = 0;
  }
  aux1[0] = 1;
  aux2[0] = 1;
  int cont = 1;
  int soma = 2;
  while(matrix[MAX-1] == 0) {
    for(i = 0; i < cont; i++) {
      if((aux1[i]+aux2[i]) < 10) {
        matrix[i] = aux1[i] + aux2[i];
      } else {
        matrix[i] = (aux1[i] + aux2[i])%10;
        int aux;
        if(i+1 == cont) {
          aux = matrix[i+1] + 1;
          matrix[i+1] = aux;
        } else {
          aux = aux1[i+1] + 1;
          aux1[i+1] = aux;
        }        
      }
    }
    for(i = 0; i < MAX; i++) {
      if(matrix[i] > 10) {
        matrix[i] = matrix[i]%10;
        matrix[i+1] = matrix[i+1]+1;
      }
    }
    for(i = 0; i < MAX; i++) {
      aux1[i] = aux2[i];
      aux2[i] = matrix[i];
    }
    if(matrix[cont] > 0) {
      cont++;
    }
    soma++;
  }
  printf("%d\n", soma);
}
