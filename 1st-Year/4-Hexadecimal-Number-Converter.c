#include <stdio.h>

void main()
{
    _Bool loopController = 0;
    int typeSelection;
    int userNumber;
    char* digit1;
    char* digit2;
    char* digit3;
    char* digit4;
    char* digit5;
    
    int length(unsigned x) {
    if (x >= 10000)      return 5;
    if (x >= 1000)       return 4;
    if (x >= 100)        return 3;
    if (x >= 10)         return 2;
    return 1;
    }
    
    char* converter16(unsigned x) {
    if (x == 15)         return "F";
    if (x == 14)         return "E";
    if (x == 13)         return "D";
    if (x == 12)         return "C";
    if (x == 11)         return "B";
    if (x == 10)         return "A";
    if (x == 9)          return "9";
    if (x == 8)          return "8";
    if (x == 7)          return "7";
    if (x == 6)          return "6";
    if (x == 5)          return "5";
    if (x == 4)          return "4";
    if (x == 3)          return "3";
    if (x == 2)          return "2";
    if (x == 1)          return "1";
    return "0";
    }
    
    printf("This program will help you in converting decimal and hexadecimal numbers to each other.\n\n");
    
    while (loopController == 0) {
        printf("Please select convertation type: \n\n 1- Decimal to hexadecimal \n 2- Hexadecimal to decimal \n\n 0- Exit \n\n> ");
        scanf("%d", &typeSelection);
        
        if (typeSelection == 1) {
            printf("\n\nPlease enter your decimal number, it will convert to hexadecimal (Max 5 digits)\n\n> ");
            scanf("%d", &userNumber);
            
            if (length(userNumber) == 1) {
                printf("%s", converter16(userNumber));
            } else if (length(userNumber) == 2) {
                if (userNumber < 16) {
                    printf("%s", converter16(userNumber));
                } else {
                    digit2 = converter16(userNumber / 16);
                    digit1 = converter16(userNumber - (userNumber / 16) * 16);
                    printf("\n\nThe result is: %s%s\n\n", digit2, digit1);
                }
            } else if (length(userNumber) == 3) {
                if (userNumber < 256) {
                    digit2 = converter16(userNumber / 16);
                    digit1 = converter16(userNumber % 16);
                    printf("\n\nThe result is: %s%s\n\n", digit2, digit1);
                } else {
                    digit3 = converter16(userNumber / 256);
                    digit2 = converter16((userNumber - (userNumber / 256) * 256) / 16);
                    digit1 = converter16(userNumber % 16);
                    printf("\n\nThe result is: %s%s%s\n\n", digit3, digit2, digit1);
                }
            } else if (length(userNumber) == 4) {
                if (userNumber < 4096) {
                    digit3 = converter16(userNumber / 256);
                    digit2 = converter16((userNumber - (userNumber / 256) * 256) / 16);
                    digit1 = converter16(userNumber % 16);
                    printf("\n\nThe result is: %s%s%s\n\n", digit3, digit2, digit1);
                } else {
                    digit4 = converter16(userNumber / 4096);
                    digit3 = converter16((userNumber - (userNumber / 4096) * 4096) / 256);
                    digit2 = converter16(((userNumber - (((userNumber / 4096) * 4096) + ((userNumber - (userNumber / 4096) * 4096) / 256 )* 256)) / 16));
                    digit1 = converter16(userNumber % 16);
                    printf("\n\nThe result is: %s%s%s%s\n\n", digit4, digit3, digit2, digit1);
                }
            } else if (length(userNumber == 5)) {
                if (userNumber < 65536) {
                    digit4 = converter16(userNumber / 4096);
                    digit3 = converter16((userNumber - (userNumber / 4096) * 4096) / 256);
                    digit2 = converter16(((userNumber - (((userNumber / 4096) * 4096) + ((userNumber - (userNumber / 4096) * 4096) / 256 )* 256)) / 16));
                    digit1 = converter16(userNumber % 16);
                    printf("\n\nThe result is: %s%s%s%s\n\n", digit4, digit3, digit2, digit1);
                } else {
                    
                }
                // 
                
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
