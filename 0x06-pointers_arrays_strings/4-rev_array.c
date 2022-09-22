#include "main.h"

/**
 * reverse_array - a function that reverses
 *the content of an array of integers.
 * @n: number of elements of the array
 * @a: the array to reverse
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	for ( ; --n > 0; ++a, --n)
	{
		*a ^= a[n];
		a[n] ^= *a;
		*a ^= a[n];
	}
}
