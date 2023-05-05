#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void moveEvenToFront(int arr[], int n) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            j++;
            swap(&arr[i], &arr[j]);
        }
    }
}

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveEvenToFront(arr, n);

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}