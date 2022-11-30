#include <stdio.h>

void main ()
{
  int shortside, longside;
  printf ("Please write the shortside of the square or rectangle\n> ");
  scanf ("%d", &shortside);
  printf ("\n\nPlease write the longside of the square or rectangle\n> ");
  scanf ("%d", &longside);
  printf ("\n\nArea of the shapes: %d\nPerimeter of the shapes: %d", (shortside * longside), (2 * (shortside + longside)));
}