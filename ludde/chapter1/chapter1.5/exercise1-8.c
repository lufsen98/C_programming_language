#include <stdio.h>
//1 write a program to count blanks tabs and newlinse
int main() {
    
    int c = getchar();
    int tab_counter = 0;
    int space_counter = 0;
    int enter_counter = 0;


    while(c != EOF) {
            
        if(c == '\n') {
            enter_counter ++;
        }
        if(c == '\t') {
            tab_counter ++;
        }
        if(c == ' ') {
            space_counter ++;
        }
        printf("\nnumbers of spaces: %d\nnumber of tabs: %d\nnumber of enter: %d\n",space_counter,tab_counter,enter_counter);
    }
    
}
