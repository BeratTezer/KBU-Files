#include <stdio.h>

int main() {
    int grade, totalGrade=0, counter=0;
    
    while (1) {
        if (counter<10) {
            printf("Please write a grade below;\nGrade: ");
            scanf("%d", &grade);
            totalGrade+=grade;
            counter++;
        }
        else {
            printf("\n\nAverage: %d", totalGrade/counter);
            break;
        }
    }

} 