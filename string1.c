#include <stdio.h>
int string_length(const char* str) {
	if(*str == '\0'){
	return 0;
	}
	++str;
	return 1 + string_length(str);
}

int main() {

	const char *str = "I am a student";
	printf("%d",string_length(str));
}
