#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  a function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string that needs to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *str2 = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	str2 = (char *)malloc(n + 1 * sizeof(char));
	if (str2 != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			str2[i] = str[i];
	} else
	{
		return (NULL);
	}
	str2[i] = '\0';
	return (str2);
}
