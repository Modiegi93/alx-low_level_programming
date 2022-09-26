#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: a pointer to a chessboard with array[8][8]
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 0; ++row)
	{
		for (col = 0; col < 8; ++col)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
