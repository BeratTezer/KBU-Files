#include <stdio.h>
#include <math.h>

double h=0.1;

// Soruda verilen fonksiyon
double f(double x)
{
    return cos(x);
}

// Sorunun a şıkkı
void a(double x) 
{
    double v1 = x + h;
    double r1 = f(v1);
    
    double r2 = f(x);

    printf("[A]: %lf", (r1-r2)/h);
}

// Sorunun b şıkkı
void b(double x)
{
    double v1 = x + h;
    double r1 = f(v1);

    double v2 = x-h;
    double r2 = f(v2);

    printf("[B]: %lf", (r1-r2)/h*2);
}

// Sorunun c şıkkı
double fi(double x, int hCarpan)
{
    double v1 = x + h/hCarpan;
    double r1 = f(v1);

    double v2 = x-h/hCarpan;
    double r2 = f(v2);

    return (r1-r2)/2*(h/hCarpan);    
}

// double d(int n, int m)
// {
//     if (m==1)
//     {
//         fi()
//     }
//     return
// }

void c(double x, int n, int m)
{
    double result = 0;
    for (int i=n; i==1; i--)
    {
        for (int i=m; i==1; i--)
        {
           result += d(n, m); 
        }
        
    }
    printf("[C]: %lf", result);
}

int main() 
{


    return 0;
}