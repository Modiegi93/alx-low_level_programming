#include "main.h"

/**
 * _abs - entry point
 * @num: an integer
 * Description: compute the absolute value of an integer
 * Return: 0 or 1
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * (-1);
	}
	return (num);
}
