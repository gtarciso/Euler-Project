#include <stdio.h>

#define MAX 10000

int main() {
  int check[MAX];
  int i, j;
  int soma = 0;
  for(i = 0; i < MAX; i++)
    check[i] = 0;
  for(i = 3; i < MAX; i++) {
    int aux = 0;
    if(check[i] == 0) {
       check[i] = 1;
       for(j = 1; j < i; j++) {
         if(i%j == 0) {
           aux += j;
         }
       }
       if(aux < MAX) {
          if(check[aux] == 0) {
            int aux2 = 0;
            for(j = 1; j < aux; j++) {
              if(aux%j == 0) {
                aux2 += j;
              }
            }
            if(aux2 == i) {
              soma += aux;
              soma += i;
              check[aux] = 1;
            }
        }
      }
    }
  }
  printf("%d\n", soma);
  return 0;
}
