#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,j,n;
    
    printf("How many rows and columns your matrix will have: ");
    scanf("%d", &n);
    
    int matrix[n][n], arrayB[n], biggest=0, aritmetic=0, geometric=0, harmonic=0;
    float sum=0, sumh=0, multip=1, divide = 1;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrix[i][j] = rand() % 99;
        }
    }
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (matrix[j][i] > biggest) {
                biggest = matrix[j][i];
            }
        }
        arrayB[i] = biggest;
        sum += arrayB[i];
        sumh += 1.0/arrayB[i];
        multip *= arrayB[i];
        biggest = 0;
    }
    
    printf("\n\n\nAritmetic Average: %lf",(sum/n));
    printf("\nGeometric Average: %lf",(pow(multip, 1.0/n)));
    printf("\nHarmonic Average: %lf",(n/sumh));
    
    return 0;

}