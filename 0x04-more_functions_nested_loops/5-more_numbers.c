#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14 10 times
*
* Return: void
*/

void more_numbers(void)
{
	int i;
	int j;
	char c;

	for (i = 0; i < 10; i++) /* The line iterator */
	{
		c = 48;

		for (j = 0; j <= 14; j++) /* The number iterator */
		{
			if (j > 9)
				_putchar('1');

			_putchar(c);
			c++;

			if (c > 57)
				c = 48;
		}

		_putchar('\n');
	}
}
