#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
