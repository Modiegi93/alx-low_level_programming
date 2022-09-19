#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that reverses a string.
 * @s: char
 * Return: reverse a string
 */
void rev_string(char *s)
{
	char str[10] = "My School";

	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);
}
