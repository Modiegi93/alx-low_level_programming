#include "main.h"

/**
 * is_prime_number - calculate the prime number of an integer
 * @n: the number to calculate the prime number of
 * @m: the divisor to test
 *
 * Return: 1 if number is prime, otherwise 0
 */
int is_prime_number(int n, int m)
{
	if (n < 4)
		return (n > 1);
	return (is_prime_number(n, 2));
}
