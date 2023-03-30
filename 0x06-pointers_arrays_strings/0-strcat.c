#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: the string that will be appended to, after removing its \0 byte
 * @src: the string that will be appended
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		result[i + j] = src[j];
	}

	result[i + j + 1] = '\0';

	return (result);
}
