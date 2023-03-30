#include "main.h"
/**
 * _strncpy - copies a string.
 *
 * @dest: the string that will be coppied to, after removing its \0 byte
 * @src: the string that will be coppied
 * @n: number of bytes used from src.
 *
 * Return: a pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
