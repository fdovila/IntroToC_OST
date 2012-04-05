/* two_arrays.c */

#include <stdio.h>

int main() {
	
	/* setting up a three-element integer array named 'myarray' */
	int myarray[3];
	
	/* create a char array named 'array2' that contains 5 characters */
	char array2[] = {'a', 'b', 'c', 'd', 'e'};
	int i;
	
	/* give values to the elements in myarray */
	myarray[0] = 700;
	myarray[1] = 800;
	myarray[2] = 900;
	
	/* show what each element of each array contains */
//	printf("index 0 of array2  is   %c\n", array2[0]);
//	printf("index 1 of array2  is   %c\n", array2[1]);
//	printf("index 2 of array2  is   %c\n", array2[2]);
//	printf("index 3 of array2  is   %c\n", array2[3]);
//	printf("index 4 of array2  is   %c\n", array2[4]);
	
//	printf("index 0 of myarray is %i\n", myarray[0]);
//	printf("index 1 of myarray is %i\n", myarray[1]);
//	printf("index 2 of myarray is %i\n", myarray[2]);
	
	/* simple loop is a lot easier to write than tons of print statements */
	/* illustrating the usefulness of loops */
	/* look at each element of array2, one at a time */
	for(i = 0; i < 5; i++) {
		printf("index %i of array2 is %c\n", i, array2[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("index %i of myarray is %i\n", i, myarray[i]);
	}
	
	return 1;	
	
}