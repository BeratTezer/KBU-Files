#include <stdio.h>
#include <math.h>

void main ()
{
  int n, nClon, length, controller=0, counter=1, currentDigit;
  
  printf("Please write a number: ");
  scanf("%d", &n);
  
  nClon = n;
  
  length = (int)log10(n)+1;
  
  for (counter; counter<=length; counter++) {
      currentDigit=n%10;
      controller+=pow(currentDigit, length);
      n=n/10;
  }
  
  if (nClon==controller) {
      printf("\n\nThis is a Armstrong Number");
  }
  else {
      printf("\n\nThis isn't a Armstrong Number");
      
  }
}