#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that reverses a string.
 * @s: a string
 * Return: void
 */
void rev_string(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;

		while (s < --t)
		{
			*s ^= *t;
			*t ^= *s;
			*s ^= *t;
			++s;
		}
	}
}
