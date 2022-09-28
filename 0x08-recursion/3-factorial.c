#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n > 1 ? n * factorial(n - 1) : 1);
}
