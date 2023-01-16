#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,j,n;
    
    printf("How many rows and columns your matrix will have: ");
    scanf("%d", &n);
    
    int matrixA[n][n], arrayB[n], arrayC[n], smallestCOLUMN, biggestROW = 0;
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixA[i][j] = rand() % 99;
        }
    }
    
    for (i=0;i<n;i++) {
        smallestCOLUMN = matrixA[j][0];
        biggestROW = 0;
        for (j=0;j<n;j++) {
            if (matrixA[i][j] > biggestROW) biggestROW = matrixA[i][j];
            if (matrixA[j][i] < smallestCOLUMN) smallestCOLUMN = matrixA[j][i];
            arrayB[i] = biggestROW;
            arrayC[i] = smallestCOLUMN;
        }
    }
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            printf("%d ",matrixA[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n\n\n");
    
    for (i=0;i<n;i++) {
        printf("%d ",arrayB[i]);
    }
    
    printf("\n\n\n");
    
    for (i=0;i<n;i++) {
        printf("%d ",arrayC[i]);
    }
    
    return 0;

}