/*
TASK 3:

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/


/* Note on the task:
The algorithm used in the solution of the task is called "Prime factorization".
The Fundamental theorem of arithmetic states that every composite integer greater than 1
can be be represented as a product of prime numbers.
There is only one such representation for a given composite number.


The steps for the solution are as follows:

1/ Find all prime factors of a given number: primeFactorization();
- Store them in a suitable data structure - array, vector, list, etc.

2/ Find the largest prime factor. This is trivial.

*/

#include <iostream>

const int MAX_INT = 128;
int primeFactors[MAX_INT];
int sizeArr = 0;

void primeFactorization(long long n)
{
	//(#): "2" is the only prime number that is even

	while (!(n & 1)) // While "n" is divisible by 2
	{
		primeFactors[sizeArr++] = 2;
		n /= 2;
	}

	for (size_t i = 3; i < sqrt(n); i += 2) // Iterating only through odd numbers since (#)
	{
		while (!(n % i)) // While "n" is divisible by "i"
		{
			primeFactors[sizeArr++] = i;
			n /= i;
		}
	}

	if (n > 2) primeFactors[sizeArr++] = n; // Adding what is left from "n"
}

int findMax(const int* arr, int size)
{
	int max = -1;

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int main()
{
	long long n = 600851475143;
	primeFactorization(n);
	std::cout << "Largest Prime Factor: " << findMax(primeFactors, sizeArr) << '\n';
}