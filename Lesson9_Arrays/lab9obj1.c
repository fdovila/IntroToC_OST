/* lab9obj1.c */
// Lab 9 Objective 1, Arrays
// Scan for integers until the user inputs a negative number or the maximum number of inputs.
// (Keep in mind a maximum number of elements for a pre-defined size of an array).
// Store the positive or zero integers in an array and print out the largest.

// If you want to get fancy, print out the 1st and 2nd largest numbers, but this isn't required.

#include <stdio.h>

int main() {
	
	int i; // initializing index variable
	int array[] = {'a', 0, 0, 0, 0}; // initializing array
	int a, b, c = 0; // initializing sorting variables
	
	
	// get user input
	printf("Please enter 5 positive integers: \n");
	for(i = 0; i < 5; i++) {
		
		// break loop if number is negative
		if(array[i-1] < 0) {
			printf("The number %i is negative, we have to stop.\n", array[i-1]);
			printf("Anyway, you may be interested to know that:\n");
			break;
		}else {
			scanf("%i", &array[i]);
		}
	}
		
	/* ascending sort, getting fancy. Even though I don't quite understand perfectly how it works */
	for(a = 0; a < 5; a++) {

		for(b = a; b < 5; b++) {

			if(array[a] > array[b]) {
				c = array[a];
				array[a] = array[b];
				array[b] = c;
			}
		}
	}
	
	/* show largest 2 integers */
	printf("- The largest number you entered was %i\n", array[4]);
	printf("- The 2nd largest number you entered was %i\n", array[3]);

	return 1;
	
}
