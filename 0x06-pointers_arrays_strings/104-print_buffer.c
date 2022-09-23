#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer
 * @b: a buffer to print
 * @size: size of buffer in bytes
 *
 * Description: The function must print the content of size bytes
 * of the buffer pointed by b.The output should print 10 bytes
 * per line.Each line starts with the position of the first byte of
 * the line in hexadecimal (8 chars), starting with 0.
 * Each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer. If the byte is a
 * printable character, print the letter, if not, print .
 * Each line ends with a new line \n.If size is 0 or less,
 * the output should be a new line only \n.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int b_pos;
	int l_pos;

	for (l_pos = 0; l_pos < 10; ++l_pos)
	{
		if (b_pos + l_pos < size)
			printf("%02x", b[b_pos + l_pos]);
		else
			printf(" ");
		if (l_pos % 2)
			putchar(' ');
	}
	for (l_pos = 0; l_pos < 10 && b_pos + l_pos < size; ++l_pos)
	{
		if (b[b_pos + l_pos] < 32 || b[b_pos + l_pos] > 126)
			putchar('.');
		else
			putchar(b[b_pos + l_pos]);
	}
	if (b_pos + l_pos < size)
		putchar('\n');
	{
		putchar('\n');
	}
}
