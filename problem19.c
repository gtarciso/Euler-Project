#include <stdio.h>

int main() {
  int i, j;
  int jan = 31, 
      feb = 28, 
      mar = 31, 
      apr = 30, 
      may = 31, 
      jun = 30, 
      jul = 31, 
      aug = 31, 
      sep = 30,
      oct = 31, 
      nov = 30,
      dec = 31; 
  int cont = 0;
  int day = 0;
  for(i = 1; i <= 366; i++) {
    day = (day+1)%7;
  }
  for(i = 1901; i < 2001; i++) {
    if(i%4 == 0)
      feb = 29;
    else
      feb = 28;
    for(j = 0; j < jan; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < feb; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < mar; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < apr; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < may; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < jun; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < jul; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < aug; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < sep; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < oct; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < nov; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
    for(j = 0; j < dec; j++) {
      day = (day+1)%7;
      if(day == 0 && j == 0)
        cont++;
    }
  }
  printf("%d\n", cont);
  return 0;
}
