/* print_formatting_c.c */

// Output and Input, Learning C Lesson 6 Example 3

// The first number, 10, is called the field width.
// This means that, if necessary, it will add blank spaces before
// the number represented by f to make it take up 10 spaces.
// (You can also use -10 to add the spaces after the number.)
// The .2 specifies the precision. It will round up or down accordingly.
// Four spaces were automatically inserted left of the 1 to make the total length 10.

#include <stdio.h>

int main() {
	
	float mynum = 123.456789;
	
	printf("%10.2f\n", mynum);
	
	return 1;
	
}
