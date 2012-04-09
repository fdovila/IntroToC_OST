/* exponentiator.c */

#include <stdio.h>

int main() {
	
	int    var1, var2;
	double result;
	// In order to use the power() function outside of main(), we have
	// to declare it like we would a variable.
	double power(int x, int y); //  in ()s we define what type of input the function is expecting
	
	/* get imput from user */
	printf("Please enter two integers separated by a space: \n");
	scanf("%i %i", &var1, &var2);
	
	/* call our function and store the returned value in a variable */
	result = power(var1, var2); // we call the power() function to get a result
	
	printf("result = %f\n", result);

}

// The beginning of the function looks exactly like the declaration of it from
// inside of main(). The difference is that now the variable names
// (x and y in this case) are required. 
// 		variables x and y are allocated for use in the power()
// 		function and they store the passed values of var1 and var2 respectively
double power(int x, int y) { 
	
	int i;
	double answer = 1;
	
	/* multiply by x, as many times as there are y */
	for(i = 0; i < y; i++) {
		answer = answer * x;
		
	}
	
	return answer;
	
}