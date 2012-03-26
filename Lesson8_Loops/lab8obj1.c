// Write a program that asks the user to input a
// height and width, then draws a rectangle made
// of #'s.  Limit   the   inputs  to  40  so the 
// rectangle doesn't get too big.

// For example:

// 		Enter a height: 3
// 		Enter a width: 5
// 			#####
// 			#####
// 			#####

// For a challenge, see if you can make a hollow
// rectangle:

// 			#####
// 			#   #
// 			#####

#include <stdio.h>

int main() {
	
	int targetw, targeth, w, h;
	w = 0;
	h = 0;
	char ink;
	ink = '1';
	
	printf("Please enter width (<40): ");
	scanf("%i", &targetw);
	
	printf("Please enter height (<40): ");
	scanf("%i", &targeth);
	
	for(h = 0; h < targeth; h++) {
		for(w = 0; w < targetw; w++) {
			if((w != 0) || (w != targetw)) {
				ink = '0';
			}else {
				ink = '1';
			}
			printf("%c ", ink);
		}
		w = 0;
		printf("\n");
		
	}
	
	return 1;
	
}
