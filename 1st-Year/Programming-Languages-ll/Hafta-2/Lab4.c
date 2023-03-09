// Write a recursion program that finds the largest element in the entered array in C language

#include <stdio.h>
#define size 10

int biggestElement(int*, int, int);

int main() {
    int n[10]={0,1,10,3,4,50,6,7,8,9}, max=0;
    
    printf("Biggest element of the array: %d", biggestElement(n, 0, max));
    
    return 0;
}

int biggestElement(int* arr, int t, int max) {
    if (t<size) {
        if (arr[t]>max) {
            max = arr[t];
            t++;
            biggestElement(arr, t, max);
        } else {
            t++;
            biggestElement(arr, t, max);
        }
    } else return max;
}