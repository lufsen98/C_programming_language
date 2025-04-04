#include <stdio.h>

int main(){

	long newline = 0;
	long blanks = 0;
	long tabs = 0;

	int c;

	while(((c = getchar()) != EOF)){
		if(c == '\n'){
			newline++;
		}else if(c == ' '){
			blanks++;
		}else if(c == '\t'){
			tabs++;
		}else if(c == 'q'){
			break;
		}
	}
	printf("%11s %11s %11s\n", "| Newline |", "| Blanks |", "| Tabs |");
	printf("%11ld %11ld %11ld\n", newline, blanks, tabs);


	return 0;
}
//10 12 21 22
