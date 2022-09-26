#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: point to the pointer char to change
 * @to: pointer to change the char pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
