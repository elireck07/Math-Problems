// Title: Problem 6
// Author: Dark_scholar
// Date: 28/09/2019

/*
This program finds the sum square difference between the sum of squares and the square sum of the first 100 numbers.
The method used is the sum one by one of the elements to get the answer.
*/

# include <stdio.h>

int sumSquare(int n){
    int result = 0;
    for(int i = 1; i <= n; i++){
        result += i*i;
    }
	
    return result;
}

int squareOfTheSum(int n){
    int result = 0;
    for(int i = 1; i <= n; i++){
        result += i;
    }

    return result * result;
}

int main(void){
    const int n = 100;

    printf("%d\n", sumSquare(n));
    printf("%d\n", squareOfTheSum(n));
    printf("The diff is: %d", squareOfTheSum(n) - sumSquare(n));

    return 0;
}