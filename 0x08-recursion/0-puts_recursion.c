#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string to print.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	char c = *s;

	if (c == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(c);
	_puts_recursion((s + 1));
}
