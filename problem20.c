#include <stdio.h>

/*
 *100! = 933262154439441526816992388562667004907159682643816214685929
 638952175999932299156089414639761565182862536979208272237582
 51185210916864000000000000000000000000 
 * */

int main() {
  int matrix[128] = { 9, 3 ,3, 2, 6, 2, 1, 5, 4, 4, 3, 9, 4, 4, 1, 5, 2, 
    6, 8, 1, 6, 9, 9, 2, 3, 8, 8, 5, 6, 2, 6, 6, 7, 4, 9, 7, 1, 5, 9, 6,
    8, 2, 6, 4, 3, 8, 1, 6, 2, 1, 4, 6, 8, 5, 9, 2, 9, 6, 3, 8, 9, 5, 2,
    1, 7, 5, 9, 9, 9, 9, 3, 2, 2, 9, 9, 1, 5, 6, 8, 9, 4, 1, 4, 6, 3, 9,
    7, 6, 1, 5, 6, 5, 1, 8, 2, 8, 6, 2, 5, 3, 6, 9, 7, 9, 2, 8, 2, 7, 2,
    2, 3, 7, 5, 8, 2, 5, 1, 1, 8, 5, 2, 1, 9, 1, 6, 8, 6, 4};
  int value = 0, i;
  for(i = 0; i < 128; i++) {
    value += matrix[i];
  }
  printf("%d\n", value);
  return 0;
}