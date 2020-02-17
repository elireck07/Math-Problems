// Title: Problem 7
// Author: Dark_scholar
// Date: 30/09/2019

/*
This program finds the 10001st prime. The prime numbers are the ones that can only be divided by themselves or one.
*/

# include <stdio.h>
# include <stdbool.h>

int main(void){

    const int totalNumberOfPrimes = 10001;

    int arrayOfPrimes[10100];
    long int n = 3;
    int nPrimes = 1;
    int i = 0;
    bool IsPrime = true;

    arrayOfPrimes[0] = 2;

	// We have an array with the primes we have found until now, and we check every odd number to see if it's a prime
    while (nPrimes < totalNumberOfPrimes) {
		// Checks if n is a prime, by trying to divide it by all the primes we have until now, if it's not divisible it is prime
        IsPrime = true;
        for (i = 0; i < nPrimes; ++i) {
            if (n % arrayOfPrimes[i] == 0) {
                IsPrime = false;
                break;
            }
        }
		
		// If it is a prime then we save it in our array
        if (IsPrime){
            arrayOfPrimes[nPrimes] = n;
            nPrimes++;
        }
        n += 2;
    }

    printf("The %dth prime is: %d\n", totalNumberOfPrimes, arrayOfPrimes[--nPrimes]);

    return 0;
}