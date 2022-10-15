#include <stdio.h>

void main()
{
    _Bool loopController = 0;
    int typeSelection;
    int userNumber;
    
    printf("This program will help you in converting decimal and hexadecimal numbers to each other.\n\n");
    
    while (loopController == 0) {
        printf("Please select convertation type: \n\n 1- Decimal to hexadecimal \n 2- Hexadecimal to decimal \n\n 0- Exit \n\n> ");
        scanf("%d", &typeSelection);
        
        if (typeSelection == 1) {
            printf("\n\nPlease enter your decimal number, it will convert to hexadecimal\n\n> ");
            scanf("%d", &userNumber);
            
            if (userNumber != int) {
                printf("\n\nYou just have to enter numbers.\n\n");
                break;
            }
            
            
            
            
            
        } else if (typeSelection == 2) {
            
            
            
            
            
        } else if (typeSelection == 0) {
            printf("Program is closing...");
            break;
        } else {
            printf("\n\nUndefinied input\n\n");
            break;
        }
        
        
        
        // 
        break;
    }

}
