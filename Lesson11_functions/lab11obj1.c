/* lab11obj1.c */

// Write a non-interactive program that illustrates a knowledge
// of functions. It doesn't matter what the program does,
// as long as it uses a function or two.

# include <stdio.h>

int count( int [] );

// 'count' a function that counts circles in numbers
int count( int array[5] ) {
	int i, w;
	i = 0;
	
	for(i = 0; i < 5; i++) {
		switch(array[i]) {
			case 1: case 2: case 3: case 4: case 5: case 7:
			w = w + 0;
			break;

			case 0: case 6: case 9:
			w = w + 1;
			break;

			case 8:
			w = w + 2;
			break;
		}
	}
	
	return w;
}

int main() {
	
	int array[] = { 3, 4, 6, 1, 2}; // the numbers in this array will be analyzed
	int w, i;

    // ***Taking out the interactive part***
	// printf("Please enter a 5 digits number: \n");
	// for(i = 0; i < 5; i++) {
	// 	scanf("%i", &array[i]);
	// }
	
	// i = 0;
	
	printf("Your number is: \n");
	for(i = 0; i < 5; i++) {
		printf("%i", array[i]);
	}
	printf("\n");
	
	w = count( array );
	
	printf("and it has %i circles in its digits.\n", w);
	
	return 1;
}