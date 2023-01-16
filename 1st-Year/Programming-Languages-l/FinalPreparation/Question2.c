#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,k,nR,nC;
    
    printf("How many rows your matrix have: ");
    scanf("%d", &nR);
    printf("How many columns your matrix have: ");
    scanf("%d", &nC);
    
    int matrix[nC][nR];
    
    for (i=0;i<nR;i++) {
        for (j=0;j<nC;j++) {
            matrix[i][j] = rand() % 99;
        }
    }
    
    for (i=0;i<nR;i++) {
        for (j=0;j<nC;j++) {
            if (matrix[i][j] > 9) {
                printf("%d ", matrix[i][j]);
            } else {
                printf(" %d ",matrix[i][j]);
            }
        }
        printf("\n");
    }
    
    printf("\n\n\n");
    int matrixT[nC][nR];
    
    for (i=0;i<nC;i++) {
        for (j=0;j<nR;j++) {
            matrixT[i][j] = matrix[j][i];
        }
    }
    
    for (i=0;i<nC;i++) {
        for (j=0;j<nR;j++) {
            if (matrixT[i][j] > 9) {
                printf("%d ", matrixT[i][j]);
            } else {
                printf(" %d ",matrixT[i][j]);
            }
        }
        printf("\n");
    }
    
    if (nR == nC) {
        int matrixAnswer[nR][nC];
        for (i=0;i<nR;i++) {
            for (j=0;j<nC;j++) {
                matrixAnswer[i][j] = matrix[i][j] *  matrixT[j][i];
            }
        }
        int smallest = matrixAnswer[0][0], biggest = matrixAnswer[0][0];
        
        for (i=0;i<nR;i++) {
            for (j=0;j<nC;j++) {
                matrixAnswer[i][j] = matrix[i][j] *  matrixT[j][i];
                if (matrixAnswer[i][j] < smallest) smallest = matrixAnswer[i][j];
                else if (matrixAnswer[i][j] > biggest) biggest = matrixAnswer[i][j];
            }
        }
        printf("\n\n\n");
        for (i=0;i<nC;i++) {
            for (j=0;j<nR;j++) {
                if (matrixAnswer[i][j] > 9) {
                    printf("%d ", matrixAnswer[i][j]);
                } else {
                    printf(" %d ",matrixAnswer[i][j]);
                }
            }
        printf("\n");
        }
        printf("Biggest Number: %d\nSmallest Number: %d", biggest, smallest);
    }
    
    return 0;
}