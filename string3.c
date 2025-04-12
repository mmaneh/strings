#include <stdio.h>


int compare_string(const char* str1, const char* str2){
        if(*str1 == '\0' && *str2 == '\0'){
        return 0;
        }
	if(*str1 != *str2){
        return -1;
	}
	return compare_string(str1 + 1, str2 + 1);
}


int main() {

        const char *str1 = "hello";
	const char *str2 = "hello"; 

        printf("%d", compare_string(str1, str2));

}

