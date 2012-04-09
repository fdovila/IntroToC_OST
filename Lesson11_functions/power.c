/* power.c */

double power(int x, int y) {
	
	int i;
	double answer = 1;
	
	/* multiply by x, as many times as there are y */
	for(i = 0; i < y; i++) {
		answer = answer * x;
		
	}
	
	return answer;
	
}