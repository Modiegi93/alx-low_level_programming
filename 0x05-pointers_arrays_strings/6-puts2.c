#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}
