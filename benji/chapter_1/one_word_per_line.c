#include <stdio.h>


int main(){

	int c;

	while(((c = getchar()) != EOF) && c != '\n'){
		if(c == ' ' || c == '\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
	printf("\n");
	return 0;
}
