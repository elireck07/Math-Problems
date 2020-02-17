// Title: Problem 4
// Author: Dark_scholar
// Date: 27/09/2019

/*
This program finds the largest palindrome below one thousand
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// This are the max and min values that are going to be used to guess the answer
    const int max = 999;
    const int min = 800;

	// This variables hold the product of two numbers and the product as a string to perform string manipulation
    long int product = 0;
    char str1[10];
    char str2[10];

	// This variables will hold the result
    int factors[2];
    long int result = 0;

	// It will brute force the answer by multiplying different factors and the finding if the product is a palindrome
    for (int i = max; i > min; i --){
        for (int j = max; j > min; j--){
            product = i * j;

            ltoa(product, str1, 10);;

            strcpy(str2, str1);

            strrev(str2);

			// It checks if its a palindrome and the biggest found until now
            if ((strcmp(str1, str2) == 0) && (product > result)){
                result = product;
                factors[0] = i;
                factors[1] = j;
            }
        }
    }

	// We present the results to the user
    printf("The result is: %li\n", result);
    printf("The first number is: %d\n", factors[0]);
    printf("The second number is: %d\n", factors[1]);

    return 0;
}