#include <stdio.h>

void main ()
{
  int counter=0, upperLimit, sum=0;
  
  printf("Please write a upper limit: ");
  scanf("%d", &upperLimit);
  
  for (counter; counter<upperLimit; counter++) {
      sum+=counter;
  }
  
  printf("\n\nSum of numbers from 0 to %d is: %d", upperLimit, sum);
}