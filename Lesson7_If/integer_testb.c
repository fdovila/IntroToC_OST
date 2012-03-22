/* integer_test.c */

#include <stdio.h>

int main() {
	
	int var1;
	
	printf("Enter an integer: ");
	
	// scanf statement reads an integer from the user
	// It assigns the integer to &var1. 
	scanf("%i", &var1);
	
	/* testing variable 1 (var1) */
	// checks the result of var1 < 10.
	// If the result of that expression is true, then the code
	// inside the braces is run
	if((var1 >= 1) && (var1 <=10)) {
		
		// this is inside the braces
		printf("var1 is between 1 and 10\n");
			
	}	
	
	// if the result is false, the code inside the braces is skipped
	return 1;
	
}
