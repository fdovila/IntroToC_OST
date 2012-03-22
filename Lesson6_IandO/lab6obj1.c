/* lab6obj1.c */
// Write a program that asks the user for three floating point
// numbers, entered in a single line, separated by a space.
// Scan in those numbers and print them out in a right justified column with
// 4 decimal places of accuracy.

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float num1, num2, num3;
	
	printf(" Please enter 3 floating point numbers\n between -999,999 and 1,000,000\n separated by a space: ");
	
	scanf("%f %f %f", &num1, &num2, &num3);
	
	printf(" %12.4f\n %12.4f\n %12.4f\n", num1, num2, num3);
	
	return 1;
	
}
