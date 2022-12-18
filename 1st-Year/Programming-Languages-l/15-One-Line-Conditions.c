#include <stdio.h>

void main()
{
    int a,b;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    printf("Please write one more number: ");
    scanf("%d", &b);
    
    int x = (a<b)?1:0;
    
    if (x==1) {
        printf("\nx=%d, it means a<b (%d<%d)",x,a,b);
    } else if (x==0) {
        printf("\nx=%d, it means a>b (%d>%d)",x,a,b);
    } else {
        printf("\nx=%d, it means there is a problem.",x);
    }
}