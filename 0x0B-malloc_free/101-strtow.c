#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * wordcount - counts the number of words in a string
 * @s: the string to count
 *
 * Return: int number of words
 */
int wordcount(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, count = 0;
	char **p;

	if (*str == '\0' || str == NULL)
		return (NULL);
	n = wordcount(str);
	if (n == 1)
		return (NULL);
	p = (char **)malloc(n * sizeof(char *));
	if (p == NULL)
		return (NULL);
	p[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			p[count] = (char *)malloc(j * sizeof(char));
			j--;
			if (p[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(p[k]);
				free(p[n - 1]);
				free(p);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				p[count][l] = str[i + l];
			p[count][l] = '\0';
			count++;
			i += j;
		}
		else
			i++;
	}
	return (p);
}
