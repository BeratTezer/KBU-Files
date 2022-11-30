#include <stdio.h>

void main ()
{
  int firstNum, secNum, GCD=1, LCM, counter=1;
  
  printf("Please write the first number: ");
  scanf("%d", &firstNum);
  
  printf("Please write the second number: ");
  scanf("%d", &secNum);
  
  do {
      if (firstNum%counter==0 && secNum%counter==0) {
          GCD = counter;
          counter++;
      } else {
          counter++;
      }
  } while (firstNum>counter || secNum>counter);
  
  LCM = (firstNum*secNum)/GCD;
  
  printf("\n\nLeast Common Multiple is: %d, %d, %d", LCM);
}