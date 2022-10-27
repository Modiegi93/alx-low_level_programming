#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the number to flip
 * @m: the other number to flip
 *
 * Return: number of bit to flip from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int bin = 0;
	int len = (sizeof(num) * 8);

	while (len >= 0)
	{
		if (num & 1)
			bin++;
		num = num >> 1;
		len--;
	}
	return (bin);
}
