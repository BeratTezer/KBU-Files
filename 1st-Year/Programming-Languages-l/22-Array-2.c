#include <stdio.h>
#include <math.h>
#define SIZE 10

void main() {
    double array[SIZE], sum=0, deviation=0.0, variance=0.0;
    int bNumber=0, index=0, tour=0;
    
    printf("Let's calculate standart deviation for ten value from a serie. Formula of the this calculation.\n\n      _______\n     /∑(x-μ)²\nσ = /--------\n   √    N\n\nσ = population standard deviation\nN = the size of the population\nx = each value from the population\nμ = the population mean\n\n");
    while (index<SIZE) {
        printf("Please write the number %d: ", index+1);
        scanf("%lf", &array[index]);
        
        bNumber=array[bNumber]<array[index]?index:bNumber;
        sum+=array[index];
        index++;
    }
    for (tour;tour<10;tour++) deviation+=(array[tour]-(sum/SIZE))*(array[tour]-(sum/SIZE));
    variance=deviation/(SIZE-1);
    deviation=sqrt(deviation/(SIZE-1));
    
    printf("\nAverage of the serie: %lf\n", sum/SIZE);
    printf("\nStandart Deviation of the serie: %lf\n", deviation);
    printf("\nVariance of the serie: %lf\n", variance);
}