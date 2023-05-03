#include <stdio.h>

int main() {
    int x, y, i, j, result = 0;
    
    printf("How many colums will have your matrix?\n> ");
    scanf("%d", &x);
    
    printf("How many rows will have your matrix?\n> ");
    scanf("%d", &y);
    
    unsigned int matrix[x][y];
    
    for (i=0; i<x; i++) {
        for (j=0; j<y; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (i=0; i<x; i++) {
        for (j=0; j<y; j++) {
            if (i%2==0 && j%2==0) result += matrix[i][j];
            else if (i%2==1 && j%2==1) result += matrix[i][j];
        }
    }

    printf("Required elements have collected. Sum of them: %d", result);

    return 0;
}