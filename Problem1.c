// Find the sum of all the multiples of 3 or 5 below 1000
#include <stdio.h>
#include <math.h>

int tg = 100;
int ByFive = 0;
int ByThree = 0;
int ByFifteen = 0;
int result = 0;
int Wait = 0;

int SumDivisibleBy(int target,int n){
    int p = 0;
    p = target / n;
    p = floor(p);
    return n*(p*(p + 1))/2;
}

int main(){
	// I want to sum all the values that are divisible by some number up to a certain limit
    ByFive = SumDivisibleBy(tg, 5); // All the numbers that are divisible by 5, up to 20
	ByThree = SumDivisibleBy(tg, 3);
	ByFifteen = SumDivisibleBy(tg, 15);
	result = ByFive + ByThree - ByFifteen;
    printf("%d", result);

    scanf("%d", &Wait);
	return 0;
}

main();
