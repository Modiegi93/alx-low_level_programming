#include "main.h"

/**
 * __sqrt_recursion - helper for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @m: the divisor to test
 *
 * Return: the square root of n
 */
int __sqrt_recursion(int n, int m)
{
	if (m * m < n)
		return (__sqrt_recursion(n, m + 1));
	return (m * m == n ? m : -1);
}

/**
 * _sqrt_recursion - compute the square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n,
 * otherwise 0 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (__sqrt_recursion(n, 0));
}
