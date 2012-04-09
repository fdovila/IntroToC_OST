/* exponentiator_short.c */

#include <stdio.h>
#include <power.h>

int main() {
	
	int    var1, var2;
	double result;
	// In order to use the power() function outside of main(), we have
	// to declare it like we would a variable.
		
	/* get imput from user */
	printf("Please enter two integers separated by a space: \n");
	scanf("%i %i", &var1, &var2);
	
	/* call our function and store the returned value in a variable */
	result = power(var1, var2); // we call the power() function to get a result
	
	printf("result = %f\n", result);

}