#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,k,n;
    
    printf("How many rows and columns (NxN) will your matrix have: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            matrix[i][j] = rand() % 99;
        }
    }
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            for (k=0;k<j;k++) {
                if (matrix[j][i] > matrix[k][i]) {
                    int temp = matrix[j][i];
                    matrix[j][i] = matrix[k][i];
                    matrix[k][i] = temp;
                } 
            }
        }
    }

    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (matrix[i][j] > 9) {
                printf("%d ",matrix[i][j]);
            } else {
                printf(" %d ",matrix[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}