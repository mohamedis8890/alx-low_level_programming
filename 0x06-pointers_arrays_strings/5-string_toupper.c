#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: a pointer to the string to be uppercased.
 * Return: the string uppercased.
 */

char *string_toupper(char *s)
{
	char *result = s;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			result[i] -= 32;
	}

	return (result);
}
