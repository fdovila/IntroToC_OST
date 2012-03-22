/* lab7obj1.c */
// Write a program that allows the user to enter a score
// between 0 and 100 and then print out a letter grade based
// on the score. Use if statements, and don't forget to test
// for valid input.

#include <stdio.h>

int main() {
	
	
	int score;
	
	printf("Please enter your score (0-100): ");
	scanf("%i", &score);
	
	if((score <0) || (score > 100)) {
		printf("Your score is not correct, please try again.\n");
	}else {
		if(score >= 60) {
			if(score >=81) {
				if(score >=91) {
					printf("Terrific! You got an A.\n");

				}else {
					printf("Very Good!, You got a B.\n");
				}	
			}else if(score >= 71) {
				printf(" Good Job, You got a C.\n");
				
			}else {
					printf("Ok (just that), You got a D.\n");
			}
			
		}else if(score >= 41) {
					if(score >= 51) {
						printf("Almost there, You got an E.\n");

					}else {
						printf("Close, but not enough. You got a F.\n");
					}
		}else {
			printf("I'm very sorry, You got the lowest grade: F-.\n");
		}
	}
	
	return 1;
	
}
