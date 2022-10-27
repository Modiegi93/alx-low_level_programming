#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want.
 * @n: number to get
 *
 * Return: the value of the bit at index or -1 if error
 * occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;
	return (n &  1);
}
