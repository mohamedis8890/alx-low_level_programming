#include "main.h"
/**
 * print_number - prints an integer to the stdout.
 *
 * @n: the integer to  be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i = 0;
	unsigned int swap = 0;

	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = n;

	while (i > 0)
	{
		swap = 10 * swap + i % 10;
		i /= 10;
	}

	while (swap > 0)
	{
		_putchar((swap % 10) + '0');
		swap /= 10;
	}
}
