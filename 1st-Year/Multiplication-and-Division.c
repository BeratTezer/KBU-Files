#include <stdio.h>

int main () { 
  double a;
  double b;
  double c;

  a = 3.0 / 4.0 / 5.0;
  b = 3.0 / (4.0 / 5.0);
  c = 6.0 / 2.0 * 3.0;

  printf ("%lf\n", a);
  printf ("%lf\n", b);
  printf ("%lf", c);
}
