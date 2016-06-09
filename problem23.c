#include <stdio.h>

#define MAX 28123

int main() {
  int mtrix[MAX+1];
  int absum[MAX+1];
  int i, j;
  for(i = 0; i < MAX+1; i++) {
    mtrix[i] = 0;
    absum[i] = 0;
  }
  long int soma = 0;
  for(i = 1; i <= MAX; i++) {
    int aux = 0;
    for(j = 1; j < (i/2)+1; j++) {
      if(i%j == 0) {
        aux += j;
      }
    }
    if(aux > i) {
      mtrix[i] = 1;
    }
  } 
  for(i = 0; i < MAX+1; i++) {
    if(mtrix[i] == 1) {
      for(j = 0; j < MAX+1; j++) {
        if(i+j <= MAX) {
          if(mtrix[j] == 1) {
            if(absum[j+i] == 0) {
              absum[j+i] = 1;
            }
          }
        }
      }
    }
  }
  for(i = 0; i < MAX+1; i++) {
    if(absum[i] == 0) {
      soma += i;
    }
  } 
  printf("%ld\n", soma);
  return 0;
}
