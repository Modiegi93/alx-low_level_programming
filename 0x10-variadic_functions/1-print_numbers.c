#include "variadic_functions.h"

/**
 * print_numbers - function that prints a number
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to function
 *
 * Description: if separator is NULL, don't print it.
 * print a new line at the end of your function.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
