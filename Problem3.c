// I will find the largest factor of a number
#include <stdio.h>

// I define the constants
#define ARRAY_SIZE 10000000

// I define the variables
unsigned long long int n = 600851475143;
int wait = 0;
static unsigned long long int ArrayPrimes[ARRAY_SIZE] = {0};
int IsPrime = 1; // This is a flag variable
unsigned long long int LargestPrime = 0;
unsigned long long int Guess = 3;

// Loop variables
unsigned long long int i;

int main(){
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
                IsPrime = 0;
                break;
            } else{
                ;
            }
        }

        // I save the prime in the Array
        if(IsPrime){
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
        IsPrime = 1;
    }

    LargestPrime = ArrayPrimes[NumberofPrimes - 1];

    // This is the output of the function
    printf("%d\n", LargestPrime);

    // This is the wait function
    scanf("%d", &wait);

    return 0;
}
