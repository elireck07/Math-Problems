// Title: Problem 3
// Author: Dark_scholar
// Date: 07/08/2019

/*
This program finds the largest prime factor of n number.
Prime factors are numbers that divide evenly a number n. For example:
The prime factors of 13195 are 5, 7, 13 and 29.
*/

// I will find the largest factor of a number
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	// I define the variables
	unsigned long long int n = 600851475143;
	unsigned long int ArrayPrimes[20000] = {0};
	bool isPrime = true; // This is a flag variable
	unsigned long long int largestPrime = 0;
	unsigned long long int guess = 3;
	
    // I set the first prime
    ArrayPrimes[0] = 2;

    // I need an iterator to the Array
    size_t numberOfPrimes = 1;

    // I have to test if it is divisible by the first prime
    while(n % ArrayPrimes[0] == 0)
	{
        n = n / ArrayPrimes[0];
    }

    // I will divide the n variable until it reaches 1, by trying to divide it by all the other primes I have.
    while(1 < n)
	{

        // I find if the number is prime
        for(unsigned long int i = 0; i < numberOfPrimes; i++)
		{
            if(guess % ArrayPrimes[i] == 0)
			{
                isPrime = false;
                break;
            }
        }

        // I save the prime in the Array
        if(isPrime)
		{
            largestPrime = guess;
            ArrayPrimes[numberOfPrimes] = largestPrime;

            // This will allow me to reduce the number on it's primes
            while(n % ArrayPrimes[numberOfPrimes] == 0)
			{
                n = n / ArrayPrimes[numberOfPrimes];
            }
            numberOfPrimes++;
        }

        // I update the variables
        guess++;

        // I return the flag to the original value
        isPrime = true;
    }

    largestPrime = ArrayPrimes[numberOfPrimes - 1];

    // This is the output of the function
    printf("The largest product prime of a number %llu is: %llu\n", n, largestPrime);

    return 0;
}