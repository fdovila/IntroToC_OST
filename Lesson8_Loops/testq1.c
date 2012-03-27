#include <stdio.h>

int main() {
	
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;
	
	while(((1 < 5) || (j < 20)) && (k != 5)) {
		
		if((j % 3) == 0) {
			
			k++;
			i = i + 2;
			
		}
		i--;
		j++;
		printf("i = %i  j = %i  k = %i\n", i, j, k);
	}
	
	printf("i = %i  j = %i  k = %i\n", i, j, k);
	
	return 1;
	
}
