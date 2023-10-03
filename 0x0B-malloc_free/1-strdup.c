#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 *
 * Return: a pointer to the created memory space, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + len) != '\0')
	{
		len++;
	}

	dup = (char *)malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}

	do {
		*(dup + i) = *(str + i);
		i++;
	} while (i < len);

	return (dup);
}
