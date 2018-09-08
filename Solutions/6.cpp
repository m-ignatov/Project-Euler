/*
TASK 6:

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include <iostream>

int main()
{
	int lim = 100;
	int sqrOfSum = lim * lim * (lim + 1) * (lim + 1) / 4;
	int sumOfSqr = (2 * lim + 1)*(lim + 1)*lim / 6;

	std::cout << sqrOfSum - sumOfSqr << '\n';
}