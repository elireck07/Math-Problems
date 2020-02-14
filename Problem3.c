// Title: Problem 3
// Author: Dark_scholar
// Date: 07/08/2019

/*
This program finds the largest prime factor of n number.
Prime factors are numbers that divide evenly a number n. For example:
The prime factors of 13195 are 5, 7, 13 and 29.
*/

// I include standard packages
#include <stdio.h>
#include <stdbool.h>

int main(void){
	// I define the variables
	unsigned long long int n = 600851475143; // This is the target number we are going to try to find the largest prime factor of this number
	const long arraySize = 10000000;
	unsigned long long int ArrayPrimes[arraySize] = {0}; // I want the array to be initialize to zero
	bool isPrime = true; // Flag variable to find if guess is prime
	unsigned long long int LargestPrime = 0;
	unsigned long long int Guess = 3;

	// Loop variables
	unsigned long long int i;
	
    // I set the first prime
    ArrayPrimes[0] = 2;

    // I need an iterator to the Array
    size_t NumberofPrimes = 1;

    // I have to test if it is divisible by the first prime
    while(n % ArrayPrimes[NumberofPrimes - 1] == 0){
        n = n / ArrayPrimes[NumberofPrimes - 1];
    }

    // The main algorithm
    while(1 < n){

        // I find if the number is prime
        for(i = 0; i < NumberofPrimes; i++){
            if(Guess % ArrayPrimes[i] == 0){
                isPrime = false;
                break;
            } else{
                ;
            }
        }

        // I save the prime in the Array
        if(isPrime){
            LargestPrime = Guess;
            ArrayPrimes[NumberofPrimes] = LargestPrime;

            // This will allow me to reduce the number on it's primes
            while(n % ArrayPrimes[NumberofPrimes] == 0){
                n = n / ArrayPrimes[NumberofPrimes];
            }
            NumberofPrimes++;
        }

        // I update the variables
        Guess++;

        // I return the flag to the original value
        isPrime = true;
    }

    LargestPrime = ArrayPrimes[NumberofPrimes - 1];

    // This is the output of the function
    printf("%d\n", LargestPrime);

    return 0;
}