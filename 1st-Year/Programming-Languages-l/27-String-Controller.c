#include <stdio.h>

int main() {
    char vowels[10]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}, consonants[48]={'b','B','c','C','d','D','f','F','g','G','j','J','k','K','l','L','m','M','n','N','p','P','q','Q','s','S','t','T','v','V','x','X','z','Z','h','H','r','R','w','W','y','Y'}, digits[10]={'1','2','3','4','5','6','7','8','9','0'}, text[256], clear[256];
    int spaceCounter=0, vowelCounter=0, consonantsCounter=0, digitCounter=0, i=0, vi=0, ci=0, di=0;
    
    printf("Enter a line of string: ");
    fgets(text, 256, stdin);
    
    while(text[i]!='\0') {
        if(text[i]==' ') {
            spaceCounter+=1;
        }
        for(vi=0;vi<=9;vi++) {
            if(text[i]==vowels[vi]){
                vowelCounter+=1;
            }
        }
        for(ci=0;ci<=47;ci++) {
            if(text[i]==consonants[ci]) {
                consonantsCounter+=1;
            }
        }
        for(di=0;di<=9;di++) {
            if(text[i]==digits[di]) {
                digitCounter+=1;
            }
        }
        i+=1;
    }
    
    printf("\nVowels: %d\nConsonants: %d\nDigits: %d\nWhite Spaces: %d",vowelCounter,consonantsCounter,digitCounter,spaceCounter);

    return 0;
}