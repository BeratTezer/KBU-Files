// Write a recursive function that takes the address of the array and the number of elements as a parameter and returns the number of oddnumbers in the array. (Do not use global variable)

#include <stdio.h>

int oddCounter(int array[], int);

int main() {
    int arr[10]={0,2,4,6,8,10,12,13,15,17};
    int elements = sizeof(arr)/sizeof(arr[0]);
    printf("There is %d odd numbers in our array.", oddCounter(arr, elements));
    
    return 0;
}

int oddCounter(int array[], int i) {
    if (array[i]%2 == 1) return 1 + oddCounter(array, i-1);
    else if (i == 0) return 0;
    else return 0 + oddCounter(array, i-1); 
}