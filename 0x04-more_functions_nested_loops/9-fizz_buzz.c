#include <stdio.h>

/**
 * main -prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		
		if (n % 3 == 0)
			printf("Fizz");

		if (n % 5 == 0)
			printf("Buzz");
	}
	else 
		printf("%d", n);
	}

	if (n != 100)
	{
		putchar(' ');
	}
	putchar('\n');

	return (0);

}



