#include <stdio.h>

void main () {
    int a=100, b=0;
    
    while (a>=200) {
        if (a%9==0) {
            b+=a;
            printf("%d\n",a);
            a++;
        } else {
            a++;
        }
    }
}