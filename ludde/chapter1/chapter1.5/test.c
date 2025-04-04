#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0
int main() {
    int state =  OUTSIDE;
    int c = 0;
    int newLine = 0;
    int newCharacter = 0;
    int newWord = 0;

    while ((c = getchar()) != EOF) {
        ++newCharacter;
        if(c == '\n')
            ++newLine;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUTSIDE;
        else if ( state == OUTSIDE) {
            state = INSIDE;
            ++newWord;
        }
        if (c == 'q') {
            break;
        }
    }
    printf("%d %d %d\n", newLine,newWord,newCharacter);
}



