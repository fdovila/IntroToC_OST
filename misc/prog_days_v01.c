/* prog_days.c */
#include <stdio.h>

int main(){
  /* declares the variable called days, int stands for integer */
  int days;
  
  /* assign the value 1 to the variable 'days' */
  days = 1;
  
  /* print statement, %i says, "place an integer here," and "days" after the comma tells where to get the integer */
  printf("I've been programming C for %i day(s)\n",days);
  
  return(1);
}
