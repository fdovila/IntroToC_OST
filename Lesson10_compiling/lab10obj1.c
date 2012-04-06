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
# include <math.h>

int main() {
	
	// declaring variables
	int arraysize = 1;
	int i;
	int array[arraysize];
	
	printf("HOW MANY numbers do you need to average? \n");
	scanf("%i", &arraysize);
	
	printf("Please enter the numbers to average.\n");
	for(i = 0; i <= arraysize; i++) {
		scanf("%i\n", &array[i]);
	}
	
	int sum = array[0] + array[1] + array[2] + array[3] + array[4] + array[5] + array[6] + array[7] + array[8] + array[9];
	
	float average = sum/(float)arraysize;
	
	printf("The average is %f.\n", average);
	
	return 1;
}