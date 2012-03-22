/* lab7obj2.c */
// Write a program that prints out a menu of four options and use
// a switch statement to perform the selected action.
// 		The menu might look like this:
// 			(1) Say "hello"
// 			(2) Add 2 + 2
// 			(3) Say "OST Rocks"
// 			(4) Do all of the above
// 		Make a selection:

#include <stdio.h>

int main() {
	
	int option;
	
	printf("Please select one option (enter the correspondant number): \n");
	printf("[1] Say 'Banana'. \n");
	printf("[2] Give me the result of: 2 + 2. \n");
	printf("[3] Say 'OST rocks'. \n");
	printf("[4] Do the all of the above. \n");
	scanf("%i", &option);
	
	if((option < 1) || (option >4)) {
		printf("That's not a valid option, please try again.\n");
	
	}else {
		switch(option) {
		
		case 1:
			printf("Banana.\n");
		break;
		
		case 2:
			printf("4 (you know that, don't you?).\n");
		break;
		
		case 3:
			printf("OST rocks...my budget, ha!.\n");
		break;
		
		case 4:
			printf("Banana.\n");
			printf("4 (you know that, don't you?).\n");
			printf("OST rocks...my budget, ha!.\n");
		break;
		}
		
	}
	
	return 1;
	
}