#include "main.h"
/**
 * _strncat - concatenates two strings.
 *
 * @dest: the string that will be appended to, after removing its \0 byte
 * @src: the string that will be appended
 * @n: number of bytes used from src.
 *
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; j < n; j++)
	{
		if (src[j] == 0)
			break;
		result[i + j] = src[j];
	}

	result[i + j + 1] = '\0';

	return (result);
}
