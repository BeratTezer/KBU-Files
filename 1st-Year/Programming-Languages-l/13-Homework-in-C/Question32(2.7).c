#include <stdio.h>

void main ()
{
  int n, counter=1;
  
  printf("Please write a number: ");
  scanf("%d", &n);
  
  for (counter; counter<=n; counter++) {
      printf("> %d\n", counter);
  }
}