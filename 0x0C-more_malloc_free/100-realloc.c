#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: size in bytes of the allocated space to ptr
 * @new_size: new size in bytes to new memory
 *
 * Description: If new_size > old_size, the “added” memory
 * should not be initialized.If new_size == old_size do
 * not do anything and return ptr. If ptr is NULL, then the
 * call is equivalent to malloc(new_size), for all values
 * of old_size and new_size.If new_size is equal to zero,
 * and ptr is not NULL, then the call is equivalent to free(ptr)
 *
 * Return: if new_size == old_size, return ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 * Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		mem = malloc(new_size);

		if (!mem)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if  (!mem)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}

