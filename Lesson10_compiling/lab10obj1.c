// 1) First, ask the user for how many numbers they are going
//	  to enter, up to a maximum of ten numbers.

// 2) Then, allow the user to input the numbers one by one,
// 	  and store the numbers in an array. You should check to
// 	  make sure the input is valid.

// 3) Next, determine the average of those numbers and print it out.


// Hints:
// In C, when you divide an integer by another integer,
// the result is an integer. To get a floating point result you can
// cast the divisor to a float:

//    average = sum/(float)arraysize;

# include <stdio.h>

int main() {
	
	// declaring variables
	int size = 10;
	int array[size], i, sum;
	float average;
	
	// 1) Prompt user for array size
	printf("How many numbers do you want to average?\n");
	scanf("%i", &size);
	
	// Checking 'size' is <= 10
	while(size > 10 || size <= 1) {
		printf("Sorry, the number you entered is invalid, it MUST be between 2 and 10\n");
		printf("Again, How many numbers do you want to average?\n");
		scanf("%i", &size);
	}
	printf("Ok. so you want to average %i numbers...\n", size);
	
	// 2) Prompt each number to average
	printf("Please enter those numbers to average, one by one\n", size);
	for(i = 0; i < size; i++) {
		scanf("%i", &array[i]);
	}
	
	i = 0;
	printf("Ok. so you want to average: \n");
	for(i = 0; i < size; i++) {
		printf("%i ", array[i]);
	}
	printf("\n");
	
	// 3) Calculate the average
	// Get the numbers' sum
	sum = 0;
	for(i = 0; i < size; i++) {
		sum = sum + array[i];
	}
	printf("The sum of your numbers is %i...\n", sum);
	printf("divided by %i means...\n", size);
	
	// Calculate the average
	average = sum/(float)size;
	printf("The AVERAGE of your numbers is %.2f\n", average);
	
	return 1;
}