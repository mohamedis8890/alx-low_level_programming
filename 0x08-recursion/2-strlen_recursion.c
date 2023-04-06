#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: the input string
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
