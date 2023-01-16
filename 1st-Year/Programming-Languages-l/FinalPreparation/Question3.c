#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,k,n;
    
    printf("How many rows and columns your matrix will have: ");
    scanf("%d", &n);
    
    int matrixA[n][n];
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixA[i][j] = rand() % 99;
        }
    }
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (matrixA[i][j] > 9) {
                printf("%d ", matrixA[i][j]);
            } else {
                printf(" %d ",matrixA[i][j]);
            }
        }
        printf("\n");
    }
    
    printf("\n\n\n");
    
    int matrixB[n][n];
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixB[i][j] = rand() % 99;
        }
    }
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (matrixB[i][j] > 9) {
                printf("%d ", matrixB[i][j]);
            } else {
                printf(" %d ",matrixB[i][j]);
            }
        }
        printf("\n");
    }
    
    printf("\n\n\n");
    
    int matrixC[n][n];
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixC[i][j] = rand() % 99;
        }
    }
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (matrixC[i][j] > 9) {
                printf("%d ", matrixC[i][j]);
            } else {
                printf(" %d ",matrixC[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n\n");
    
    int matrixBT[n][n];
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixBT[i][j] = matrixB[j][i];
        }
    }
    
    int matrixCT[n][n];
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixCT[i][j] = matrixC[j][i];
        }
    }
    
    int matrixD[n][n];
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixD[i][j] = matrixA[i][j] * (matrixBT[i][j] + matrixCT[i][j]);
        }
    }
    
    int trace=0;
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrixD[i][j] = matrixA[i][j] * (matrixBT[i][j] + matrixCT[i][j]);
            if (i==j) trace += matrixD[i][j];
        }
    }
    
    for (i=0;i<n;i++) {
            for (j=0;j<n;j++) {
                if (matrixD[i][j] < 100000 && matrixD[i][j] >= 10000) printf("%d ", matrixD[i][j]);
                else if (matrixD[i][j] < 10000 && matrixD[i][j] >= 1000) printf(" %d ", matrixD[i][j]);
                else if (matrixD[i][j] < 1000 && matrixD[i][j] >= 100) printf("  %d ", matrixD[i][j]);
                else if (matrixD[i][j] < 100 && matrixD[i][j] > 9) printf("   %d ", matrixD[i][j]);
                else printf("    %d ",matrixD[i][j]);
            }
        printf("\n");
    }
    
    printf("Trace of square: %d", trace);
    
    return 0;

}