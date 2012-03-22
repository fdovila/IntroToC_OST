/* integer_testc.c */

#include <stdio.h>

int main() {
	
	int var1;
	
	printf("Enter an integer: ");
	scanf("%i", &var1);
	
	/* testing variable 1 */
	if((var1 < 1)  || (var1 > 10)) {
		
		printf("var1 is not between 1 and 10\n");
		
	}
	
	else {
		printf("var1 is between 1 and 10\n");
		
	}
	
	return 1;
	
}
