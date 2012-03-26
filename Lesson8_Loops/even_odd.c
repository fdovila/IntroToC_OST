/* even_odd.c */

#include <stdio.h>

int main() {
	
	int lim, var, ans;
	
	printf("Your upper limit will be?: ");
	scanf("%i", &lim);
	
	printf("Please enter a number < %i: ", lim);
	scanf("%i", &var);
	
	while(var < lim) {
		
		ans = var % 2; // here '%' returns the  remainder of dividing var by 2.
		
		if(ans == 1) {
			printf("%i is odd\n", var);
			
		}else {
			printf("%i is even\n", var);
		}
		
		var++;
		
	}
	
	return 1;
	
}