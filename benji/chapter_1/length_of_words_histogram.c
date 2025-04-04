#include <stdio.h>

int main(){

	char text[1024];
	int c;
	int i = 0;
	size_t count = 0;
	int t = 0;
	int word_len[1024];

	while((c = getchar()) != EOF && i < 1023 && c != 'q'){
		text[i++] = (char)c;
	}
	text[i] = '\0';
	for(int j = 0; text[j] != '\0'; j++){
		if(text[j] == ' ' || text[j] == '\n'){
			word_len[t++] = count;
			count = 0;
		}else{
			count++;
		}
	}

	for(int k = 0; k < t; k++){
		printf("Word %d length: %d\n", (k+1), word_len[k]);
	}

	return 0;
}
