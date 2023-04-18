// Write a program using dynamic memory allocation that prints out words of a sentence in reverse order.

#include <stdio.h>
#include <stdlib.h>

void reverseSentence(char *sentence, int x);

int main() {
    char *text = (char*)malloc(100 * sizeof(char));
    int i=0;
    
    printf("Please write your sentence: ");
    fgets(text, 100, stdin);
    
    reverseSentence(text, 0);
    
    free(text);
    
    return 0;
}

void reverseSentence(char *sentence, int x) {
    if (*(sentence + x) == '\0') return;
    else {
        int i = x;
        
        while (*(sentence + i) != ' ' && *(sentence + i) != '\0') i++;
        
        reverseSentence(sentence, i + 1);
        
        for (x; x<i; x++) if (*(sentence + x) != '\n') printf("%c", *(sentence + x));
        printf(" ");
    }
}