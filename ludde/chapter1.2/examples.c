#include <stdio.h>
//print Fahrenheit-Celsius table
int main() {
    float fahr = 0;
    float celsius = 0;
    float lower = 0;
    float upper = 300;
    float step = 20;


    fahr = lower;

    while( fahr <= upper) {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
} 

