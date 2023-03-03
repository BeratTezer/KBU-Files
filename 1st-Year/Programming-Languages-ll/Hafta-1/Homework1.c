#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int loop=1, d1=0, d2=0, diceTotal=0, point=0, first=0;
    // unsigned seed;
    
    // Manual:
    // printf("Seed: ");
    // scanf("%u", &seed);
    // srand(seed);
    
    // Automatic:
    srand(time(NULL));
    
    while (loop) {
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        diceTotal = d1 + d2; 
        
        printf("\n  ____\n /\\' .\\    _____\n/: \\___\\  / .  /\\\n\\' / . / /____/..\\\n \\/___/  \\'  '\\  /\n          \\'__'\\/\n\n");
        printf("First Dice: %d\nSecond Dice: %d\n",d1,d2);
        
        if (first==0) {
            switch (diceTotal) {
                case 7:
                    printf("\nNatural!");
                    loop = 0;
                    break;
                case 11:
                    printf("\nNatural!");
                    loop = 0;
                    break;
                case 2:
                    printf("\nCraps!");
                    loop = 0;
                    break;
                case 3:
                    printf("\nCraps!");
                    loop = 0;
                    break;
                case 12:
                    printf("\nCraps!");
                    loop = 0;
                    break;
                case 4:
                    point = diceTotal;
                    printf("\nPoint! (%d)", point);
                    break;
                case 5:
                    point = diceTotal;
                    printf("\nPoint! (%d)", point);
                    break;
                case 6:
                    point = diceTotal;
                    printf("\nPoint! (%d)", point);
                    break;
                case 8:
                    point = diceTotal;
                    printf("\nPoint! (%d)", point);
                    break;
                case 9:
                    point = diceTotal;
                    printf("\nPoint! (%d)", point);
                    break;
                case 10:
                    point = diceTotal;
                    printf("\nPoint! (%d)", point);
                    break;
            }
            first = 1;
        } else {
            if (point == diceTotal) {
                printf("\nYou win!\n");
                loop = 0;
            } else if (point == 7) {
                printf("\nYou lose!\n");
                loop = 0;
            }
        }
        
    }
}