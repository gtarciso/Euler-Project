#include <stdio.h>
#include <string.h>

#define ROWS 20 

int main() {
  int i;
  long int aux, cont;
  aux = 1;
  // iterative binomial expansion
  for(i = 1; i <= ROWS*2; i++) {
    aux = (aux*(((ROWS*2)+1)-i))/i;
    if(i == ROWS)
      cont = aux;
  }
  printf("%ld\n", cont);
  return 0;
}
