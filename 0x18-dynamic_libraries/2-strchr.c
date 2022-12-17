#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer to the string to search
 * @c: the character to search for
 *
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	for ( ; *s; ++s)
	{
		if (*s == c)
			return (s);
	}
	return (*s == c ? s : NULL);
}
