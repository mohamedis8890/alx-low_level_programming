#include "main.h"
/**
* print_most_numbers - prints numbers except 2 and 4
*
* Return: 0, as required
*/
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 && x != 52)
			_putchar(x);

	}

	_putchar('\n');
}
