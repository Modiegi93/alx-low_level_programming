#include "main.h"
/**
 *  _islower - entry point
 *  @c: character
 *  Description: Returns 1 if c is lowercase
 *  Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
