#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string in which to search the substring
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hpos, *npos;

	do {
		hpos = haystack;
		npos = needle;
		do {
			if (!*npos)
				return (haystack);
			if (!*hpos)
				return (NULL);
		} while (*hpos++ == *npos++);
	} while (*(++haystack));

	return (NULL);
}
