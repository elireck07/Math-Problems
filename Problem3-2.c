// Title: Problem 3-2
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
	unsigned int ArrayPrimes[20000] = {0};
	int isPrime = true;
	unsigned long int guess = 2;
	unsigned int numberOfPrimes = 0;

    for(guess = 2; guess < n; ++guess)
	{
        // This loop will see if a number is a prime
        for(unsigned int i = 0; i <= numberOfPrimes; ++i)
		{
            if(ArrayPrimes[i] == 0)
			{
                break;
            }
            if(guess % ArrayPrimes[i] == 0)
			{
                isPrime = false;
				break;
            }
        }

        // If it is prime then it saves the value
        if(isPrime)
		{
            ArrayPrimes[numberOfPrimes] = guess;

            // This will allow me to reduce the number on it's primes
            while(n % ArrayPrimes[numberOfPrimes] == 0)
			{
                n = n / ArrayPrimes[numberOfPrimes];
            }
            numberOfPrimes++;
        } 

        // I change the flag to the original state
        isPrime = true;
    }

    // This is the output of the function
    printf("The largest product prime is: %u", guess);

    return 0;
}
