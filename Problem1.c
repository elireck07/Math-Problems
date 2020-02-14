// Title: Problem 1
// Author: Dark_scholar
// Date: 09/08/2019

/*
This program finds the sum of numbers divisible by 3 and 5 up to a number n.
For this it has a function that sum all the numbers divisible by another up to n.
*/

// I include standard packages
#include <stdio.h>
#include <math.h>

int SumDivisibleBy(const int target, const int n){
    int p = 0;
    p = target / n;
    p = floor(p);
    return n * (p * (p + 1)) / 2;
}

int main(void){
	// This are the variables that are going to hold the result values
	int target = 100;
	int ByFive = 0;
	int ByThree = 0;
	int ByFifteen = 0;
	int result = 0;

    ByFive = SumDivisibleBy(target, 5); // Sum of numbers divisible by 5
	ByThree = SumDivisibleBy(target, 3); // Sum of numbers divisible by 3
	ByFifteen = SumDivisibleBy(target, 15); // Sum of numbers divisible by 15
	
	// I get the sum of numbers divisible by 3 and 5, but I deduct the numbers divisible by both
	result = ByFive + ByThree - ByFifteen;

	// The result is printed
	printf("The sum of the numbers divisible by 3 and 5 up to 100 is: %d\n", result);

	return 0;
}
