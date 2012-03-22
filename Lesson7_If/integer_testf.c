/* integer_testf.c */

#include <stdio.h>

int main() {
	
	int var;
	
	printf("Enter an integer: ");
	scanf("%i", &var);
	
	/* testing variable */
	
	switch(var) {
		
		case 1: case 2: case 4: case 8: case 16:
			printf("var is either 1, 2, 4, 8, or 16.\n");
		break;
		
		case 3: case 5: case 7:
			printf("var is either 3, 5, or 7.\n");
		break;
		
		case 6:
			printf("var is 6.\n");
		break;
		
		default:
			printf("var isn't any between 1 -> 8, or 16.\n");
		break;
		
	}
	
	return 1;
	
}
