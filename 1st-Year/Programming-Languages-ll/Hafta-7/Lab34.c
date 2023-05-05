// Write the C program using dynamic memory, which counts the words in a given text or sentence.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[1000];
    int i, n=1;

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    int sentence_length = strlen(sentence);

    for (i = 0; i <= sentence_length; i++) if (sentence[i] == ' ' && sentence[i+1] != ' ') n++;

    printf("Found %d times.", n);
    
    return 0;
}