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
    
    printf("\n\nmatrisThree is generating by multiply matrisOne and matrisThree...\n\n");
    for (i;i<=2;i++) {
        for (j;j<=2;j++) matrisThree[i][j] = matrisOne[i][j] * matrisTwo[i][j];
        j=0;
    }
    
    i = 0;
    
    for (i;i<=2;i++) {
        for (j;j<=2;j++) printf("%d ",matrisThree[i][j]);
        printf("\n");
        j=0;
    }   
}