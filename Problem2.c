// Title: Problem 2
// Author: Dark_scholar
// Date: 12/04/2019

/*
This program sums the even numbers of the fibonacci sequence below four million.
The fibonacci sequence is made by summing the previous two numbers to get the third one, starting by:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
*/

// I include standard packages
#include <stdio.h>

int main(void){
	// This are the variables that are going to be used
	const int limit = 4000000;
	unsigned long sum = 0;
	int fib1 = 1;
	int fib2 = 1;
	int fib3 = 0;
	
	// This loop will continue until it reaches a fibonacci number above four million if even then it will sum it
	while(fib3 <= limit)
	{	
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		
		// If its even then it will add to the previous sum
		if(fib3 % 2 == 0)
			sum += fib3;
	}
	
	// I give the result to the user
	printf("The sum of the even numbers of the fibonacci sequence below four million is: %lu", sum);
	
	return 0;
}