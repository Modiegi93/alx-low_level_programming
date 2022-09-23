#include  "main.h"

/**
 * carry_from_last - carry overflow from last index to the current index
 * @b: buffer to operate on
 * @i: index to carry to
 *
 * Return: void
 */
void carry_from_last(char *b, int i)
{
	b[i] = b[i - 1] / 10;
	b[i - 1] %= 10;
}

/**
 * find_string_end - find end of string
 * @s: the string to find
 *
 * Return: the pointer to the end of the string
 */
char *find_string_end(char *s)
{
	char *s_end;

	for (s_end = s; *s_end; ++s_end)
		;
	return (s_end);
}

/**
 * *infinite_add - a function that adds two numbers
 * @n1: the number to add
 * @n2: the other number to add
 * @r: the buffer to store the result into
 * @size_r: the size of the buffer
 *
 * Return: a pointer to buffer r, otherwise 0 if result
 * does not fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *n1_end, *n2_end;
	int i, j;

	for ( ; n1[1] && *n1 == '0'; ++n1)
		;
	for ( ; n2[1] && *n2 == '0'; ++n2)
		;
	n1_end = find_string_end(n1);
	n2_end = find_string_end(n2);
	for (i = 0; n1 < n1_end || n2 < n2_end; ++i)
	{
		if (i + 1 >= size_r)
			return (0);
		if (i && r[i - 1] > 9)
			carry_from_last(r, i);
		else
			r[i] = 0;
		if (n1 < n1_end)
			r[i] += *(--n1_end) - '0';
		if (n2 < n2_end)
			r[i] += *(--n2_end) - '0';
	}
	if (r[i - 1] > 9)
	{
		if (i + 1 >= size_r)
			return (0);
		carry_from_last(r, i++);
	}
	r[i--] = '\0';
	for (j = 0; j < i; --i, ++j)
	{
		r[i] ^= r[j];
		r[j] ^= r[i];
		r[i] ^= r[j];
		r[i] += '0';
		r[j] += '0';
	}
	if (j == i)
		r[i] += '0';
	return (r);
}
