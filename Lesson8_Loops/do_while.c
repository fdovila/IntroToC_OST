/* do_while.c */

#include <stdio.h>

int main() {
	
	int i = 0;
	
	do {
		// i = i + 1            HERE is the same as ++1, it adds 1 BEFORE the printf
		printf("%i\n", i++); // i++ adds 1 to i AFTER the printf function
		// i = i + 1            HERE is the same as i++ inside the printf in the line above
	}while(i < 10);
	
	return 1;
}