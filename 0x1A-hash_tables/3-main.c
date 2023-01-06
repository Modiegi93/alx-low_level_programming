#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * main -  check code
 *
 * Return: Always EXIT_SUCCESS.S
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	return (EXIT_SUCCESS);
}
