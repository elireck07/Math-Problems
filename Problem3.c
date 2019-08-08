// I will find the largest factor of a number
#include <stdio.h>

// I define the constants
#define SIZEARRAY 100

// I define the variables
unsigned int n = 13195;
int wait = 0;
unsigned int ArrayPrimes[SIZEARRAY];
unsigned int i = 2;
int IsPrime = 1;
unsigned int j;
unsigned int k = 0;
unsigned int l = 0;
unsigned int product = 1;

int main(){

    for(j = 2; j < n; j++){
            // This loop will see if a number is a prime
            for(i = 2; i < j; i++){
                if(ArrayPrimes[l] == 0){
                    break;
                }
                if(j % ArrayPrimes[l] == 0){
                    IsPrime = 0;
                }
                l++;
            }

            // If it is prime then it saves the value
            if(IsPrime){
                ArrayPrimes[k] = j;
                k++;

                // I will make the n smaller
                while((n / j) == 0){
                    n = n / j;
                }


            } else{
                ;
            }

            // I change the flag to the original state
            IsPrime = 1;
            l = 0;
    }

    // This is the output of the function
    printf("%d", j);

    // This is the wait function
    scanf("%d", &wait);
    return 0;
}
