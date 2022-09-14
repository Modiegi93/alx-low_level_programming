#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 * whose values do not exceed 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long x = 0, y = 1, sum;
	float z;

	while (1)
	{
		sum = x + y;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			z += sum;

		x = y;
		y = sum;
	}
	printf("%.0f\n", z);
	return (0);
}
