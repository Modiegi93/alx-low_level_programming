#include "main.h"

/**
 * _strlen_recursion - calculate the length of the string
 * @s: a pointer to the string to print
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	return (*s ? _strlen_recursion(s + 1) + 1 : 0);
}
