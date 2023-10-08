#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the first number of @s2 characters to take
 *
 * Return: the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	int s1size, s2size, i;

	if (s1 == NULL)
		s1size = 0;
	else
		s1size = strlen(s1);

	if (s2 == NULL)
		s2size = 0;
	else
	{
		if (strlen(s2) < n)

			s2size = strlen(s2);
		else
			s2size = n;
	}
	result = malloc(s1size + s2size + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1size; i++)
		*(result + i) = *(s1 + i);

	for (; i < s1size + s2size; i++)
		*(result + i) = *(s2 + i - s1size);

	*(result + i) = '\0';

	return (result);
}
