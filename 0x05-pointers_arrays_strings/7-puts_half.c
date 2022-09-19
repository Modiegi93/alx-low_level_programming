#include "main.h"

/**
 * puts_half - Write a function that prints half of a string,
 * followed by a new line.
 * @str: string
 * Return: half of a string
 */
void puts_half(char *str)
{
	int len;

	if (str)
	{
		for (len = 0; *(str + len); ++len)
			;
		for (str += (len + 1) / 2; *str; ++str)
			_putchar(*str);
		_putchar('\n');
	}
}
