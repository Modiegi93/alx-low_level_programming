#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the string to concatenate
 * @s2: the other string to concatenate
 *
 * Return: pointer to newly allocated space or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str2 = NULL;
	unsigned int i;
	int n1;
	int n2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	str2 = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str2[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		str2[i] = s2[count];
		count++;
	}
	return (str2);
}
