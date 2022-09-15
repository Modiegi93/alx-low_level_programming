#include "main.h"

/**
 * print_triangle - print a triangle in the terminal
 * @size: base and heigh of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; ++x)
	{
		for (y = size; y > x; --y)
			_putchar(' ');
		for (; y > 0; --y)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
