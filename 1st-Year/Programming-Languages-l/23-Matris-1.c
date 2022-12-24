#include <stdio.h>

void main() {
    int i=0, j=0, matrisOne[3][3], matrisTwo[3][3], matrisThree[3][3];
    
    printf("Please fill the first matris\n");
    for (i;i<=2;i++) {
        for (j;j<=2;j++) {
            printf("\n[%d][%d] #> ",i,j);
            scanf("%d",&matrisOne[i][j]);
            printf(" ");
        }
        j=0;
    }
    
    i = 0;
    
    printf("\n\nPlease fill the second matris\n");
    for (i;i<=2;i++) {
        for (j;j<=2;j++) {
            printf("\n[%d][%d] #> ",i,j);
            scanf("%d",&matrisTwo[i][j]);
        }
        j=0;
    }
    
    i = 0;
    
    printf("\n\nmatrisThree is generating by adding matrisOne and matrisThree...\n");
    for (i;i<=2;i++) {
        for (j;j<=2;j++) {
            matrisThree[i][j] = matrisOne[i][j] + matrisTwo[i][j];
            printf("\nmatrisThree[%d][%d]: %d, matrisOne[%d][%d]: %d, matrisTwo[%d][%d]: %d",i,j,matrisThree[i][j],i,j,matrisOne[i][j],i,j,matrisTwo[i][j]);
        }
        j=0;
    }
}