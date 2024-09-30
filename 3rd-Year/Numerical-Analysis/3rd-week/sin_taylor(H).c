#include <stdio.h>
#include <math.h>

double factorial(double n)
{ 
    if (n == 0 || n == 1) { 
        return 1; 
    } 
    double fact = 1; // 0! = 1
    for (int i = 2; i <= n; i++) { 
        fact *= i; 
    } 
    return fact; 
}

double sin_taylor(double x, int terms) 
{ 
    double sin_x = 0.0; 
    for (int n = 0; n < terms; n++) { 
        double term = (n % 2 == 0 ? 1 : -1) * (pow(x, 2 * n + 1) / factorial(2 * n + 1)); 
        sin_x += term; 
    } 
    return sin_x; 
} 

int main() 
{ 
    double x; 
    int terms; 

    printf("Enter the value of x (in radians): "); 
    scanf("%lf", &x); 
    printf("Enter the number of terms for Taylor series: "); 
    scanf("%d", &terms); 

    double result = sin_taylor(x, terms); 
    printf("sin(%lf) ≈ %lf\n", x, result); 
 
    return 0; 
}