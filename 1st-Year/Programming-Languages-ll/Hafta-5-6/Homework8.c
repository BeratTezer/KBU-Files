#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void coder(char*, int*);
void decoder(int*, char*, int);

int main() {
    int i = 0, loop = 1, *codePtr;
    char str[100], *convertedStr;
    
    printf("Write a text to code it. (Just use these CAPITAL LETTERs: A, B, C, D, E, F, G, H and I)\n> ");
    fgets(str, 100, stdin);
    
    codePtr = (int*)malloc(strlen(str)*sizeof(int));
    
    
    coder(str, codePtr);
    
    for (i=0; i < strlen(str)-1; i++) {
        printf("%d ", codePtr[i]);
    }
    
    printf("\n\n\n\n");
    
    convertedStr = (char*)malloc(strlen(str) * sizeof(char));
    decoder(codePtr, convertedStr, strlen(str));
    
    for (i=0; i < strlen(str)-1; i++) {
        printf("%c ", convertedStr[i]);
    }
    
    return 0;
}

void coder(char* text, int* codePtr) {
    int i = 0, x, y, codeBlock[3][3] = {{65, 68, 71}, {66, 69, 72}, {67, 70, 73}};
    
    while (*(text+i) != '\n') {
        for (x=0; x<3; x++) {
            for (y=0; y<3; y++) {
                if (codeBlock[x][y] == *(text+i)) {
                    *(codePtr + i) = (x+1)*10 + y+1;
                    x = 0;
                    y = 0;
                    i++;
                }
            }
        }
    }
}

void decoder(int *code, char *text, int length) {
    int i = 0, x, y, codeBlock[3][3] = {{65, 68, 71}, {66, 69, 72}, {67, 70, 73}};
    
    while (i <= length) {
        x = *(code + i)/10;
        y = *(code + i)%10;
        
        *(text + i) = *(*(codeBlock + x-1) + y-1);
        
        i++;
    }
}