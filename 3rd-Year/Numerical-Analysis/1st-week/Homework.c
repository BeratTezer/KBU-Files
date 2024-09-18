#include <stdio.h>

// This function specifically designated for using first rows of the matris by Berat Tezer
int det_calc(int rows, int columns, int matris[rows][columns]) {
    if (rows != columns) printf("This function can only calculate the square matrises.");
    else if (rows > 2) {
        int total=0;
        for (int i = 1; i < columns; i++) {
            int Minor[rows-1][columns-1];
            for (int j=0; j<(rows-1); j++) { // Minor will be calculated like M[j][k] which is minor of matris[0][i]
                for (int k=0; k<(columns-1); k++) {
                    Minor[j][k] = matris[1][i+1];
                }
            }
            return total += matris[0][i]*pow(-1,(1+i+1))*det_calc(j, k, Minor);
        }
        return total;
    } else { // 2x2 matrix return case
         
    }
}

int main() {


	return 0;
}
