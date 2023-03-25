#include "main.h"
/**
* print_line - prints line with specific length
*
* @n: number of _ characters to be printed
* Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');
}
