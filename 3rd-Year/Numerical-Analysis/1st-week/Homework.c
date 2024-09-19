#include <stdio.h>
#include <math.h>

// This function specifically designated for using first rows of the matris by Berat Tezer
int det_calc(int rows, int columns, int matris[rows][columns]) {
    if (rows != columns) {
        printf("This function can only calculate the determinant of square matrices.\n");
        return 0;
    } else if (rows == 2) {  // base case (2x2 matris)
        return matris[0][0] * matris[1][1] - matris[0][1] * matris[1][0];
    } else {
        int total = 0; 
        for (int i = 0; i < columns; i++) {
            int Minor[rows - 1][columns - 1]; 
            for (int j = 1, g = 0; j < rows; j++, g++) {
                int k_minor = 0;
                for (int k = 0; k < columns; k++) {
                    if (k == i) continue; 
                    Minor[g][k_minor] = matris[j][k];
                    k_minor++;
                }
            }   
            total += matris[0][i] * pow(-1, i) * det_calc(rows - 1, columns - 1, Minor);
        }
        return total;  
    }
}

int main() {
    int matris[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    printf("\n\nDeterminant of the matris is: %d", det_calc(3,3,matris));

	return 0;
}
