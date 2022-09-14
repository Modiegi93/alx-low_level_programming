#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long x = 1, y = 2, sum;
	unsigned long x_a, x_b, y_a, y_b;
	unsigned long a, b;

	for (count = 0; count <= 92; count++)
	{
		sum = x + y;
		printf("%lu, ", sum);

		x = y;
		y = sum;
	}
	x_a = x / 10000000000;
	y_a = y / 10000000000;
	x_b = x % 10000000000;
	y_b = y % 10000000000;

	for (count = 93; count < 99; count++)
	{
		a = x_a + y_a;
		b = x_b + y_b;
		if (x_b + y_b > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");

		x_a = y_a;
		x_b = y_b;
		y_a = a;
		y_b = b;
	}
	printf(", ");
	return (0);
}
