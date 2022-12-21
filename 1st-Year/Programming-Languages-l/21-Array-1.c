#include <stdio.h>
#define SIZE 5

void main() {
    double array[SIZE], sum=0;
    int bNumber=0, index=0;
    
    while (index<SIZE) {
        printf("Please write the number %d: ", index+1);
        scanf("%lf", &array[index]);
        
        bNumber=array[bNumber]<array[index]?index:bNumber;
        sum+=array[index];
        index++;
    }
    
    printf("\nAverage of the serie: %lf\n", sum/SIZE);
    printf("\nBiggest value of the serie: %lf\n", array[bNumber]);
    
}