#include <stdio.h>

double kuvvet(double x, int k)
{
    double carpim = 1;
    for (int i = 1; i < k+1; i++)
    {
        carpim *= x;
    }
    return carpim;    
}

long double bitCalc(int s, int c[], int f[]) 
{
    int sValue = kuvvet(-1,s);
    int cValue = 0;
    long double fValue = 0;
    
    for (int i = 0; i < 8; i++)
    {
        cValue += c[i] * kuvvet(2, i);
    }

    for (int i = 0; i < 24; i++)
    {
        fValue += f[i] * kuvvet(2, -i);
    }
    
    return sValue * kuvvet(2, cValue-127) * (1 + fValue);
}

int main(int argc, char const *argv[])
{
    int s = 1;
    int c[] = {1,0,0,0,0,1,0,1};
    int f[] = {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    printf("Hesaplanan sonuc: %lf", bitCalc(s, c, f));
    
    return 0;
}
