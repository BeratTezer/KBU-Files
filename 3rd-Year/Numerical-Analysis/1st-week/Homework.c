#include <stdio.h>
#include <math.h>

// This function specifically designated for using first rows of the matris by Berat Tezer
int det_calc(int rows, int columns, int matris[rows][columns]) {
    if (rows != columns) printf("This function can only calculate the square matrises.");
    else if (rows > 2) {
        int total=0;
        for (int i = 1; i < rows; i++) {
            int j = 0
            int Minor[rows-1][columns-1];
            // Minor will be calculated like M[j][k] which is minor of matris[0][i]
            for (int g=0; j<rows-1; j++) { 
                for (int k=0; k<columns-1; k++) {
                    Minor[g][k] = matris[i][j];
                }
            }
            j += 1;
        }
        return total += matris[0][i]*pow(-1,(1+i+1))*det_calc(rows-1, columns-1, Minor);
        return total;
    } else { // 2x2 matrix return case
        return matris[0][0]*matris[1][1]-matris[0][1]*matris[1][0];
    }
}

int main() {
    int matris[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("[%d][%d]: ", i, j);
            matris[i][j] = scanf("%d");
        }
    }

    printf("\n\nDeterminant of the matris is: %d", det_calc(3,3,matris));

	return 0;
}
