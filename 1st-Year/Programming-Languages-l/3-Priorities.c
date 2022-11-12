#include <stdio.h>

void main () { 
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    
    double e;
    double f;
    double g;
    double h;
    
    e = (a + b) * c / d;
    f = ((a + b) * c) / d;
    g = (a + b) / (c / d);
    h = a + (b + c) / d;
    
    printf("%lf \n", e);
    printf("%lf \n", f);
    printf("%lf \n", g);
    printf("%lf", h);
}