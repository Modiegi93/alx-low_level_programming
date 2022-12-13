#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to search
 * @accept: the characters to allow in the string
 *
 * Description: calculates the length of number of bytes in the
 * initial segment of s which consist only of bytes from accept
 *
 * Return: the number of bytes in the initial
 *segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *accept_pos;

	for (i = 0; s[i]; ++i)
	{
		for (accept_pos = accept; *accept_pos; ++accept_pos)
		{
			if (s[i] == *accept_pos)
			break;
		}
		if (!*accept_pos)
			break;
	}
	return (i);
}
