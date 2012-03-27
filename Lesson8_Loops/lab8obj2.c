/* lab8obj2.c */

// The following section of code gets a character
// from input and prints it out if it's not a newline.
// Use a loop to print out all of the input characters
// until a newline is found.

#include <stdio.h>
 
int main(){
	
	char a;
	
	while(a != '\n') {
		a = getchar();
		printf("%c", a);
	}
	
	return 1;

}
