#include "main.h"

/**
 * _strchr - Write a function that
 *
 * @s: athe string to search in
 *
 * @c: the character to be searched for
 *
 * Return: a pointer to to the first occurence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (c == '\0')
		return (s + i);

	return (NULL);
}
