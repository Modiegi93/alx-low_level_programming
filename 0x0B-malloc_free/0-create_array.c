#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an arrays of chars & initialize with specific char
 * @c: characters to create
 * @size: size of memory to point
 *
 * Return: NULL if size is 0, othewise pointer to array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *array =  NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));

		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
