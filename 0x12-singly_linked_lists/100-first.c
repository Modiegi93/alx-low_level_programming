#include "lists.h"
#include <string.h>
#include <stdio.h>

void __attribute__((constructor)) primary(void);

/**
 * primary - prints sentence before main function
 *
 * Return: void
 */
void primary(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house");
	printf("upon my back!\n");
}
