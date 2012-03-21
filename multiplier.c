/* multiplier.c */
// Output and Input, Learning C Lesson 6 Example c

#include <stdio.h>

int main() {
	
	float num1, num2, result;
	
	// we want to print out a line prompting the user for their input
	printf("Please enter two numbers separated by a space: ");
	
	scanf("%f %f", &num1, &num2);
	// When the user types information at the prompt and presses Enter,
	// it goes into a standard input (STDIN) buffer (also referred to as a stream).
	// It stays in the buffer until the program decides what to do with it
	// "%f %f", tells scanf to look in the buffer for two floating point numbers
	// separated by white space.
	// we tell scanf where to store the two number:
	//  We need to tell scanf where that memory is. This can be done by using
	// the address operator, &. 
	
	//  the two floating point numbers that the user gave us are stored in
	// the variables num1 and num2; They can be used later in the program:
	result = num1 * num2;
	
	printf("The result is %f\n", result);
	
	return 1;
	
}
