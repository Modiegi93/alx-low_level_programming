#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: function pointer that receives string
 * @name: name to print
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
