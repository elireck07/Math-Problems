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
    const int max = 999;
    const int min = 300;

    long int product = 0;
    char str1[10];
    char str2[10];

    int factors[2];

    long int result = 0;

    int end;

    for (int i = max; i > min; i --){
        for (int j = max; j > min; j--){
            product = i * j;

            ltoa(product, str1, 10);;

            strcpy(str2, str1);

            strrev(str2);

            if ((strcmp(str1, str2) == 0) && (product > result)){
                result = product;
                factors[0] = i;
                factors[1] = j;
            }

        }
    }

    printf("The result is: %li\n", result);
    printf("The first number is: %d\n", factors[0]);
    printf("The second number is: %d\n", factors[1]);

    return 0;
}
