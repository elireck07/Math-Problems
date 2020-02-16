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
    int result = 0;
    bool IsSmallest = false;

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

    printf("%d", --i);

    return 0;
}
