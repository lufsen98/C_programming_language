#include <stdio.h>
/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.*/
int main() {
    int character = 0; 
    char char_arr[1024];
    int i = 0;

    while((character = getchar()) != EOF) {
        if ((character != '\t') && 
            (character != '\b') &&
            (character != '\\')) {
            char_arr[i++] = character;
        }
        else {
            char_arr[i++] = '\\';
            if (character == '\t') {
                char_arr[i++] = 't'; 
            }
            if (character == '\b') {
                char_arr[i++] = 'b';
            }
            if (character == '\\') {
                char_arr[i++] = '\\';
            }
        }
        if (character == 'q') {
            break;
        }
    }
    char_arr[i] = '\0';
    printf("%s\n", char_arr);

}    
