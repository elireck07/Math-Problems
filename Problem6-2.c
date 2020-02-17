// Title: Problem 6-2
// Author: Dark_scholar
// Date: 28/09/2019

/*
This program finds the sum square difference between the sum of squares and the square sum of the first 100 numbers.
The method used is the analytical functions to make the sums and the just substract the functions from each other to get the answer.
*/

# include <stdio.h>

int sumSquare(int n){
    int result = 0;
	
	result = n * (n + 1) * (2 * n + 1) / 6;
	
    return result;
}

int squareOfTheSum(int n){
    int result = 0;
    
	result = n * (n + 1) / 2;

    return result * result;
}

int main(void){
    const int n = 100;

    printf("%d\n", sumSquare(n));
    printf("%d\n", squareOfTheSum(n));
    printf("The diff is: %d", squareOfTheSum(n) - sumSquare(n));

    return 0;
}