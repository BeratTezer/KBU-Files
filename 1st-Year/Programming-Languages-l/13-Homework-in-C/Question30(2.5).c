#include <stdio.h>

void main ()
{
  int counter=1, upperLimit, product=1;
  
  printf("Please write a upper limit: ");
  scanf("%d", &upperLimit);
  
  for (counter; counter<=upperLimit; counter++) {
      product*=counter;
  }
  
  printf("\n\nMultiply of numbers from 0 to %d is: %d", upperLimit, product);
}