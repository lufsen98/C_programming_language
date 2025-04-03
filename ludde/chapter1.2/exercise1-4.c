#include <stdio.h>
//celsius to farenheit
int main() {
    int celsius = 0;
    float farh  = 0;
    int max_value = 300;
    int step_over = 20;

    printf("%7s|%10s\n%17s\n","Celsius","Farhenheit","---------------------------");
    while(celsius <= max_value) {
        farh = celsius*(9.0/5.0)+32;
        printf("%d\t%6.1f\n",celsius,farh);
        celsius += step_over;
    }
}
