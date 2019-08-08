// I will find the largest factor of a number
#include <stdio.h>

// I define the constants
#define SIZEARRAY 100000
#define OBJETIVENUMBER 600851475143

// I define the variables
int wait = 0;
unsigned long long int ArrayPrimes[SIZEARRAY];
unsigned long long int i = 2;
int IsPrime = 1;
unsigned long long int j;
unsigned long long int k = 0;
unsigned long long int l = 0;
unsigned long long int product = 1;

int main()
{

    for(j = 2; j < OBJETIVENUMBER; j++){
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
            } else{
                ;
            }

            // I change the flag to the original state
            IsPrime = 1;
            l = 0;

            // This will keep a trace of the product of the prime numbers
            product = product * ArrayPrimes[k];
    }

    int z;
    for(z = 0; z < SIZEARRAY; z++){
        if(ArrayPrimes[z] == 0){
            break;
        }
        printf("%llu is a Prime\n", ArrayPrimes[z]);
    }

    scanf("%d", &wait);
    return 0;
}
