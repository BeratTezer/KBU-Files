#include <stdio.h>

int main() {
    int n, i, s, j, val = 1;
    
    printf("How many lines will write dowm from pascal triangle?\n> ");
    scanf("%d", &n);
    
    printf("\nPascal triangle:\n\n");
    
    for (i=0; i<n; i++) {
        for (s=(n-i); s>0; s--) printf(" ");
        
        for (j=0; j<=i; j++) {
            if (j==0 || i==0)
                val = 1;
            else
                val = val * (i-j + 1) / j;
            
            printf("%d ", val);
        }
        printf("\n");
    }
    return 0;
}