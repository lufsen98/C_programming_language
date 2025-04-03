#include <stdio.h>


int main(){

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	celsius = lower;

	printf("%7s|%10s\n%17s\n", "Celsius", "Fahrenheit",
	"------------------");
	while(celsius <= upper){
		fahr = celsius * (9.0f/5.0f) + 32.0f;
		printf("%7.0f %10.0f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
