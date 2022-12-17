#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: the string to append to
 * @src: the string to append
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;

	while (src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + src_len < src)
	{
		do {
			*dest_end++ = *src++;
		} while (src_len--);
	}

	return (dest);
}
