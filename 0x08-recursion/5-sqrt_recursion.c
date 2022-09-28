#include "main.h"

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number to calculate the square root of
 * @m: the divisor to test
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n, int m)
{
	if (m * m < n)
		return (_sqrt_recursion(n, m + 1));
	return (m * m == n ? m : -1);
}
