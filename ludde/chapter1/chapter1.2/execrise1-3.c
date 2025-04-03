#include <stdio.h>

int main() {
    int fahr = 0;
    float celsius = 0;
    int max_value = 300;
    int step_over = 20;
    printf("Farenheit to Celsius\n");
    while( fahr <=max_value ) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%d\t%6.1f\n",fahr, celsius);
        fahr = fahr + step_over;
    }

    return 0;

}
