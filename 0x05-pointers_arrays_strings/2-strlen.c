#include "main.h"
#include <stdio.h>

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: char
 * Return: lenght of character string
 */
int _strlen(char *s)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
