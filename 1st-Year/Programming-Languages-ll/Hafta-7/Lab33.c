// Write a program that reads a string entered from the keyboard and find frequency of characters in 
// this string using dynamic memory management.
// Example: For “Karabük University”;
// 2 “a”, 1 “b”….

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char letter[100], sentence[1000];
    int n=0, i, j;

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    printf("Enter a character to count for: ");
    scanf("%s", letter);

    int sentence_length = strlen(sentence);
    int word_length = strlen(letter);

    for (i = 0; i <= sentence_length; i++) if (sentence[i] == letter[0]) n++;

    printf("Found %d times.", n);
    
    return 0;
}