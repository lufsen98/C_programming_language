#include <stdio.h>

int main(){

	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;


	printf("%10s|%7s\n%17s\n", "Fahrenheit", "Celsius",
	"------------------");

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%7.0f %10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
