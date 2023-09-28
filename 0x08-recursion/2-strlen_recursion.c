#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to get the length of.
 *
 * Return: int, the length of the string @s.
 */
int _strlen_recursion(char *s)
{
	char c = *s;

	if (c == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion((s + 1)));
}
