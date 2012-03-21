/* print_formatting_b.c */
// Output and Input, Learning C Lesson 6 Example 2
// %f and %c are for printing floats and characters.
// The variables at the end are in the order they will be printed.
// An integer (a), two floats (x and y), and a character (chr1)

// Notice that the floating point numbers, when printed, are padded
// with zeros up to the sixth decimal place. That's because floating
// point numbers have a precision of six decimal places.

#include <stdio.h>


int main() {
	int a = 1;
	
	float x = 2.345, y = -6.78;
	
	char chr1 = 'p';
	
	printf("%i %f %f %c\n", a, x, y, chr1);
	
	return 1;
	
}
