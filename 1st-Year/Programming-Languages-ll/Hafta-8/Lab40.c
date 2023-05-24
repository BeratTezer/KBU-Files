// Predict the output of following C programs

#include <stdio.h>

enum Deneme {
    a, b, c
};

enum Deneme deneme1;

int main() {
    deneme1++;
    
    printf("%d", deneme1);
        
    return 0;
}