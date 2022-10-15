#include <stdio.h>

void main()
{
    _Bool loopController = 0;
    int typeSelection;
    int userNumber;
    
    int length(unsigned x) {
    if (x >= 10000)      return 5;
    if (x >= 1000)       return 4;
    if (x >= 100)        return 3;
    if (x >= 10)         return 2;
    return 1;
    }
    
    printf("This program will help you in converting decimal and hexadecimal numbers to each other.\n\n");
    
    while (loopController == 0) {
        printf("Please select convertation type: \n\n 1- Decimal to hexadecimal \n 2- Hexadecimal to decimal \n\n 0- Exit \n\n> ");
        scanf("%d", &typeSelection);
        
        if (typeSelection == 1) {
            printf("\n\nPlease enter your decimal number, it will convert to hexadecimal (Max 5 digits)\n\n> ");
            scanf("%d", &userNumber);
            
            if (length(userNumber) == 1) {
                
            } else if (length(userNumber) == 2) {
                
            } else if (length(userNumber) == 3) {
                
            } else if (length(userNumber) == 4) {
                
            } else if (length(userNumber == 5)) {
                
            } else {
                printf("\n\nYou have to write a number.\n\n");
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
