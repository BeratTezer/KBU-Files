#include <stdio.h>

void main() {
    int row, counter=1, spacer, control2=1;
    
    printf("Please write a row number: ");
    scanf("%d", &row);
    
    spacer = row;
    
    for (counter; counter<row; counter++) {
        for (spacer; counter<spacer; spacer--) {
            printf(" ");
        }
        spacer = row;
        for (control2; control2<counter; control2++) {
            printf("1 ");
        }
        control2=1;
        printf("\n");
    }
}