#include <stdio.h>
#include <math.h>

void main ()
{
  int a, b, c, x1, x2;
  
  printf("The formula is ax^2 + bx + c\n\nPlease write a, b and c in order\na > ");
  scanf("%d", &a);
  printf("b > ");
  scanf("%d", &b);
  printf("c > ");
  scanf("%d", &c);
  
  x1 = (-b + sqrt(b*b-4*a*c))/2*a;
  x2 = (b + sqrt(b*b-4*a*c))/2*a;
  
  printf("\n\nRoots are:\n#> %d\n#> %d", x1,x2);
}