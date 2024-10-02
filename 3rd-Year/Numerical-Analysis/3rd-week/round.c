#include <stdio.h>
#include <math.h>

double yuvarla(double x, int n) 
{
    x *= pow(10, n+1);
    int x2 = x;

    if (x2 % 10 >= 5)
    {
        x2 = x2 / 10 +1;
    } else
    {
        x2 = x2 / 10;
    }

    x = x2 / pow(10, n);

    return x;
}

int main(int argc, char const *argv[])
{
    printf("%d", yuvarla(1.5906, 4));
    return 0;
}
