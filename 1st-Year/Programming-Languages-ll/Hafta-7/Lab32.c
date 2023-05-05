// Write a program that searches for the given string in the given sentence and if the word is found 
// then prints the starting index of the places of this word to the screen.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char word[100];

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    printf("Enter a word to search for: ");
    scanf("%s", word);

    int sentence_length = strlen(sentence);
    int word_length = strlen(word);

    int i, j;
    
    for (i = 0; i <= sentence_length - word_length; i++) {
        int found = 1;
        
        for (j = 0; j < word_length; j++) {
            if (sentence[i + j] != word[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) printf("Found at index %d.\n", i);
    }

   return 0;
}