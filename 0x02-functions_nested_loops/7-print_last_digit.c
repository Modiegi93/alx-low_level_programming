#include "main.h"
/**
 * print_last_digit
 * @num: integer
 * Description: prints the last digit of a number.
 * Return: 0 or 1
 */
int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * (-1);
		_putchar('0' + lastdigit);
		return (lastdigit);
	}

	_putchar('0' + lastdigit);
	return (lastdigit);
}
