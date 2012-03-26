/* dish_washer.c */

#include <stdio.h>

int main() {
	
	int dishes;
	dishes = 0;
	
	// dishes++; is a shortcut for dishes = dishes + 1
	while(dishes < 10) {
		printf("done ");
		dishes++;	// dishes increases by 1 each time the while loop repeats
	}
	
	printf("\nDarn, time to do the dishes again. \n");
	
	return 1;
	
}