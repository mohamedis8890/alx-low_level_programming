#include "main.h"
/**
* print_triangle - the main function,
*
* Return: 0, as required
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');

		for (k = size - i; k < size; k++)
			_putchar('#');

		_putchar('#');
		_putchar('\n');
	}
}
