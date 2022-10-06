#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocmemo = malloc(b);

	if (!allocmemo)
	{
		exit(98);
	}
	return (allocmemo);
}
