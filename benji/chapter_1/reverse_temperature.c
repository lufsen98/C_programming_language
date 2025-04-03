#include <stdio.h>

int main(){

	float celsius;

	printf("%10s|%7s\n%17s\n", "Fahrenheit", "Celsius",
	"------------------");

	for(float i = 300; i >= 0; i-= 20){
		celsius = (5.0/9.0) * (i - 32.0);
		printf("%7.0f %10.1f\n", i, celsius);
	}
}
