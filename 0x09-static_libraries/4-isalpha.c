#include "main.h"
/**
 * _isalpha - entry point
 * @c: c is an integer
 * Description: Returns 1 if c is a letter, lowercase or uppercase
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
