#include <stdio.h>

int main(){
	
	int w, h, targetw, targeth, rightborder, bottonborder;
	w = 0;
	h = 0;
	char ink; // ink can be '#' or ' '
	
	printf("Please enter width (<41): ");
	scanf("%i", &targetw);
	printf("Please enter height (<41): ");
	scanf("%i", &targeth);
	
	rightborder = targetw - 1;
	bottonborder= targeth - 1;
	
	/* check if it is within limits */
	if((targeth <= 40) || (targetw <= 40)) {
		
		/* height is greater than 2 */
		if(targeth > 2) {
			
			// initialize ink to '#'
			ink = '#';
			for(h = 0; h < targeth; h++) {
				
				//START of row
				for(w = 0; w < targetw; w++) {
					
					// if INSIDE canvas, use ink = ' '
					if((w != 0) && (w != rightborder) && (h != 0) && (h != bottonborder)) {
						ink = ' ';
						
					// if IS canvas, use ink = '#'
					}else {
						ink = '#';
					}
					
					//**** print ink once ****
					printf("%c ", ink);
				}
				
				// END of row, start a new row and set w to 0
				printf("\n");
				w = 0;
			}
			
		// when height is 2, there is NO canvas needed
		}else {
			for(h = 0; h < targeth; h++) {
				ink = '#';
				for(w = 0; w < targetw; w++) {
					printf("%c ", ink);
				}
				printf("\n");
				w = 0;
			}
		}
		
	// width or height is OFF limits		
	}else {
		printf("Your width and/or height is > 40, please try again");
	}
	
	return 1;
	
}
