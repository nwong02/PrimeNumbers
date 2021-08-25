#include <stdio.h>
#include <stdlib.h>

/*
* Project		: Prime Numbers
* Title			: Primes.cpp
* Author		: Nelson Wong
* Description	: Write a program that prints all prime numbers between 3 and 100
*/

#define min 3
#define max 100

int main(void)
{
	int counter = 0;
	for (int i = min; i <= max; i++)
	{
		bool primeNumber = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)			// Number is evenly divisible 
			{
				primeNumber = false;	// Therefore, not a prime
			}
		}
		if (primeNumber == true)		//Con
		{
			printf("%d is a prime number.\n", i);
		}
	}
	return 0;
}