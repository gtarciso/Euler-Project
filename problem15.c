#include <stdio.h>
#include <stdlib.h>

#define ROWS 20 

long int pascal_triangle(int rows, long int *_aux);

int main() {
  int i;
  long int aux, *cont;
  aux = 1;
  cont = malloc(sizeof(long int)*1);
  // iterative binomial expansion
  for(i = 1; i <= ROWS*2; i++) {
    aux = (aux*(((ROWS*2)+1)-i))/i;
    if(i == ROWS) 
      *cont = aux;
  }
  // recursive binomial expansion
  aux = pascal_triangle(ROWS*2, cont);
  printf("%ld\n", *cont);
  free(cont);
  return 0;
}

long int pascal_triangle(int c, long int *_cont) {
  long int aux;    
  if(c == 0) {
    aux = 1;
  } else {
    aux = (pascal_triangle(c-1, _cont)*(((ROWS*2)+1)-c))/c;
  }
  if(c == ROWS) {
    *_cont = aux;
  }
  return aux;
} 
