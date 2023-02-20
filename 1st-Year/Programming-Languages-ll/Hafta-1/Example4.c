#include <stdlib.h>
#include <stdio.h>

/* function main begins program execution */
int main(void)
{
    int i; // counter
    unsigned seed; // number used to seed random number generator 
    
    printf("Enter seed: ");
    scanf("%u", &seed); // note %u for unsigned
    
    srand(seed); // seed random number generator
    
    // loop 10 times
    for (i=1; i<=10; i++)
    {
        // pick a random number from 1 to 6 and output it
        printf("%10d", 1+(rand()%6));
        
        // if counter is divisible by 5, begin a new line of output
        if (i%5==0)
        {
            printf("\n");
        } // end if
    } // end for
    
    return 0; // indicates successful termination
} // end main
