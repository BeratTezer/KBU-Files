#include <stdio.h>

void main () {
    int n=1, x=0, y=1;
    
    for (n; n<=10; n++) {
        for (x; x<n; x++) {
            printf("%d, (%d)",y, x);
            y=!y;
        }
        printf("\n");
    }
}