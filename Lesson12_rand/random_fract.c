/* random_fract.c */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	float result;
	
	srand(time(NULL));
	
	result = rand() / (float) RAND_MAX;
	/* gotta make sure we do the math with all floats or it won't work */
	
	printf("%f\n", result);
	
	return 1;
	
}