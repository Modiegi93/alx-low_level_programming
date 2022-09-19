#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Write a function that copies the string
 * (including the terminated null - byte)
 * @dest: the buffer to which the string is to be copied
 * @src: string to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int pos = 0;

	if (dest && src)
	{
		while (*(src + len))
			++len;
		if (src + len < dest || dest + len < src)
		{
			do {
				*(dest + pos++) = *src++;
			} while (len--);
		}
	}
	return (dest);
}
