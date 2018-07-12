/*
TASK 4:

A palindromic number reads the same both ways.
The largest palindrome madefrom the product of two 2-digit numbers is 9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>

bool isPal(int n)
{
	int original = n;
	int mirror = 0;

	while (n > 0)
	{
		mirror = (mirror * 10) + (n % 10);
		n /= 10;
	}
	return mirror == original;
}

int main()
{
	int longestPal = 0;

	for (size_t i = 999; i >= 100; i--)
	{
		for (size_t j = i; j >= 100; j--)
		{
			if (longestPal >= (i*j)) break; // We are sure that whenever this is true, we have found the Longest Palindrome
			if (isPal(i*j))
			{
				longestPal = i * j;
			}
		}
	}

	std::cout << longestPal << '\n';
}
