// Title: Problem 5
// Author: Dark_scholar
// Date: 31/09/2019

/*
This program finds the smallest multiple number by the first 20 numbers
*/

# include <stdio.h>
# include <stdbool.h>

int main(void){
    const int maxFactor = 20;

    int i = 10;
    bool IsSmallest = false;

	// This program brute forces an anwser to the problem, it goes every number checking if its the one we are looking for
    while(!IsSmallest){

        IsSmallest = true;
        for(int j = 1; j <= maxFactor; j++){
            if(i % j != 0){
                IsSmallest = false;
                break;
            }
        }

        i++;
    }

    printf("The smallest multiple number divisible by the first 20 numbers is: %d", --i);

    return 0;
}