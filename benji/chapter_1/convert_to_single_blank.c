#include <stdio.h>

int main(){

	int c;
	int last_c = 0;
	char text[1024];
	int i = 0;
	for(i; (c = getchar()) != EOF && c != 'q' && i < 1023; i++){
		if(last_c == ' ' && c == ' ' || c == '\t'){
			i--;
			continue;
		}else{
			text[i] = (char)c;
		}
		last_c = c;
	}
	text[i] = '\0';
	printf("%s\n", text);
	return 0;
}
