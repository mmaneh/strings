#include <stdio.h>
void count_vowels_and_consonants(const char *str, int *vowels, int *consonants){
	if(*str == '\0'){
	return;
	}

	if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str== 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
	++(*vowels);
	}else{
	++(*consonants);
	}
	
	count_vowels_and_consonants(str + 1, vowels, consonants);


}

int main() {
	const char* str = "hello I study programming";
	int vowels = 0;
	int consonants = 0;
	count_vowels_and_consonants(str, &vowels, &consonants);
	printf("vowels are %d, consonants are %d", vowels, consonants);

}
