#include "main.h"
/**
* main - the main function, prints lowercase alphabet
*
* Return: 0, as required
*/
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');

	return (0);
}
