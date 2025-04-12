#include <stdio.h>
void reverse_string(char* str){
	if(*str == '\0'){
	return;
	}
        reverse_string(str + 1);
	putchar(*str);        
}

int main() {

         char *str = "hello world";
	 
	 reverse_string(str);	 

}

