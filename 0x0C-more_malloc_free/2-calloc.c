#include "main.h"

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements
 * @size - size of allocated memory in bytes
 *
 * Return: a pointer to allocated memory
 * or NULL if nmemb = 0, size = 0, or if
 * function fails, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size - nmemb);

	if (!mem)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
