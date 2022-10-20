#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_sen - prints sentence before main function
 *
 * Return: void
 */
void __attribute__((constructor)) print_sen()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
