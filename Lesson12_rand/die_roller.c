/* die_roller.c */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int result, i;
	
	srand(time(NULL));
	
	for(i=0; i < 5; i++) {
		result = rand() % 6 + 1;

		printf("%i\n", result);	
		
	}
	
	return 1;
	
}