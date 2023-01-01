#include <stdio.h>

int main() {
    const int letters[52]={65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
    int i=0, i2=0, j=0, c=0;
    char text[256], clear[256];
    
    printf("Write the text to clear: ");
    scanf("%s", text);
    
    while(1) {
        if (text[i]=='\0') break;
        c=text[i];
        for(i2=0;i2<52;i2++) {
            if(c==letters[i2]) {
                clear[j]=text[i];
                j+=1;
            }
        }
        i+=1;
    }
    printf("\n\nClear version; \n\n#> %s",clear);
    return 0;
}