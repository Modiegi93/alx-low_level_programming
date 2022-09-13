#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *Description: Show alphabets
 * Return
 */
void print_alphabet_x10(void)
{
	char letter;
	int tenx;

	for (tenx = 0; tenx < 10; tenx++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}

