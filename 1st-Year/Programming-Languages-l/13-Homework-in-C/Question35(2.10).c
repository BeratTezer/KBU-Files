#include <stdio.h>
#include <math.h>

void main ()
{
  int n, nClon, length, controller=0, counter=1, currentDigit, upperLimit, upperForController=0;
  
  printf("Please write a upper limit: ");
  scanf("%d", &upperLimit);
  
  for (upperForController; upperForController<upperLimit; upperForController++) {
      n = upperForController;
      nClon = upperForController;
      counter=0;
      controller=0;
      length = (int)log10(upperForController)+1;
  
      for (counter; counter<length; counter++) {
          currentDigit=n%10;
          controller+=pow(currentDigit, length);
          n=n/10;
      }
  
      if (nClon==controller && length!=1) {
          printf("\n\n%d is a Armstrong Number", nClon);
      }
  } 
  
}