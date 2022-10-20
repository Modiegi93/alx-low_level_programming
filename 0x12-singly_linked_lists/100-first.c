#include "lists.h"
#include <string.h>
#include <stdio.h>

void __attribute__((constructor)) print_main(void);

/**
 * print_main - prints before main function is executed
 *
 * Return: void
 */
void print_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house");
	printf("upon my back!\n");
}
