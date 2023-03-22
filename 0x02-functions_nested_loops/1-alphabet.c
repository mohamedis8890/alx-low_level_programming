#include "main.h"
/**
* main - the main function, prints lowercase alphabet
*
* Return: 0, as required
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
