#include <stdio.h>

void main () { 
  int a = 15;

  _Bool x;

  x = a >= 10 && a <= 20;

  printf("%d\n", x);
  
  a = 20;
  int b = 10;
  
  _Bool y;
  
  y = (a + b) >= 20 || (a - b) <= 10;
  
  printf("%d", y);
}