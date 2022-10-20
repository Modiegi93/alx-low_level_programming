#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_sen - prints sentence before main function
 *
 * Return: void
 */
void __attribute__((constructor)) print_sen()
{
	printf("You're beat! and yet, you must allow,\nI bore my house");
	printf("upon my back!\n");
}
