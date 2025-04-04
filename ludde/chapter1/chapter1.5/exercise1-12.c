#include <stdio.h>
//write a program that prints its input one word per line  
int main() {
    int c = 0;
    /*while(read input not = EOF) {
        if input not = to space or 
    */
    
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t'){
            putchar('\n');
        }
        else {
            putchar(c);
            
        }
    }
}
