#include "main.h"
#include <stdio.h>

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: char
 * Return: lenght of character string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}
	return (len);
}
