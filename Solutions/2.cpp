/*
TASK 2

Each new term in the Fibonacci sequence is generated by adding the previous
two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values
do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>

const int N_MAX = 4000000;
const int ARR_MAX = 128;
int mem[ARR_MAX];

int evenFibonacciSum()
{
	mem[0] = 2;
	mem[1] = 8;
	int s = mem[0] + mem[1];

	for (size_t i = 2;; i++)
	{
		mem[i] = 4 * mem[i - 1] + mem[i - 2];
		if (mem[i] > N_MAX) break;
		s += mem[i];
	}
	return s;
}

int main()
{
	std::cout << evenFibonacciSum() << '\n';
}