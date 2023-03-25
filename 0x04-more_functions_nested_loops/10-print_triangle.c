#include "main.h"
/**
* print_triangle - the main function,
*
* @size: triangle size
* Return: 0, as required
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
			_putchar(' ');

		for (k = size - i; k < size; k++)
			_putchar('#');

		_putchar('#');
		_putchar('\n');
	}
}
