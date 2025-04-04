#include <stdio.h>


int main(){

	int c;
	int i = 0;
	char text[1024];

	while(((c = getchar()) != EOF) && c != 'q' && i < 1023){
		if(c != '\t' && c != '\\' && c != '\b'){
			text[i++] = (char)c;
		}else{
			text[i++] = '\\';

			if(c == '\t'){
				text[i++] = 't';
			}else if(c == '\\'){
				text[i++] = '\\';
			}else if(c == '\b'){
				text[i++] = 'b';
			}
		}

	}
	text[i] = '\0';
	printf("%s\n", text);
	return 0;
}
