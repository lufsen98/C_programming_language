#include <stdio.h>


int main() {

    printf("Farhenheit to Celisus\n");
    for(int fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%d\t%6.2f\n", fahr, (5.0/9.0) * (fahr-32));
    }
    return 0;
}
   


