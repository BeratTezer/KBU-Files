#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    char op;
    int a,b;
    
    printf("Please write a calculation symbol (+,-,*,/,^): ");
    op = getchar();
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    printf("Please write one more number: ");
    scanf("%d", &b);
    
    switch(op) {
        case '+':
            printf("\n\n%d %c %d = %d",a,op,b,(a+b));
            break;
        case '-':
            printf("\n\n%d %c %d = %d",a,op,b,(a-b));
            break;
        case '*':
            printf("\n\n%d %c %d = %d",a,op,b,(a*b));
            break;
        case '/':
            printf("\n\n%d %c %d = %d",a,op,b,(a/b));
            break;
        case '^':
            printf("\n\n%d %c %d = %f",a,op,b,pow(a,b));
            break;
        default:
            printf("\n\nYour input is invalid. Please try again.\n\n");
            break;
    }
    getch();
}