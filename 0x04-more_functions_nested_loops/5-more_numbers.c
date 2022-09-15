#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; ++a)
	{
		for (a = 0; a < 15; ++b)
		{
			if (a > 9)
				_putchar('0' + a / 10);
			_putchar('0' + a % 10);
		}
		_putchar('\n');
	}
}

