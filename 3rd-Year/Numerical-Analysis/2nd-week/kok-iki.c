#include <stdio.h>
#include <math.h>

double* kokIki (int len, double dizi[10]) {
    dizi[0] = 1; // X1 = 1
    for (int i = 1; i < 10; i++)
    {
        dizi[i] = (dizi[i-1]+2/dizi[i-1])/2;
    }
    return dizi;
}

int main()
{
    double dizi[10];
    
    kokIki(10, dizi);

    for (int i = 0; i < 10; i++)
    {
        printf("[%02d]:[%f]\n", i+1, dizi[i]);
    }
    
    return 0;
}
