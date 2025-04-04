#include <stdio.h>
/*Exercise 1-9. Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank*/
int main() {

    int first_char = getchar();
    int last_char = 0;
    while(first_char != EOF) {
        //or statement will it work
        //this will print if first char is == to and
        // how can i do so i can 
        // if first char first_char == last_char)
        if   (((first_char == ' ') || (first_char == '\t')) && 
              ((last_char == ' ')  ||  (last_char == '\t' )))
            ;
        else {
            putchar(first_char);
        }
        last_char = first_char;
        first_char = getchar();
    }
}
