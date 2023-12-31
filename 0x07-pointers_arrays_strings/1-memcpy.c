#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: memory area to be copied to
 *
 * @src: area of memory to be copied from
 *
 * @n: number of bytes from @src to be copied
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
