#include "hash_tables.h"

/**
 * key_index - gives me the index of a key
 * @size: size of an array
 * @key: the key
 *
 * Return: the index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
