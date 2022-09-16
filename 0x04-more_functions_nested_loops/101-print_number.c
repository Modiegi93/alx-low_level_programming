#include "main.h"

/**
 * print_number -  function that prints an integer.
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int x;

	if (n >= 0)
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('-');
		x = -1 * n;
		if (x >= 10)
			print_number(x / 10);
		_putchar('0' + x % 10);
	}

}
