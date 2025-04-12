#include <stdio.h>
void replace_character(char *str, char old_char, char new_char){
	if(*str == '\0'){
	return;
	}
	if(*str == old_char){
	*str = new_char;
	}
	
	replace_character(str + 1,old_char,new_char);

	
}

int main() {

	char str[] = "I am a lazy student";
	char a = ' ';
	char b = '!';
	replace_character(str, a, b);
	printf("%s",str);
}
