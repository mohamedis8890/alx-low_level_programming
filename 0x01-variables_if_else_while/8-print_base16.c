#include <stdio.h>
/**
* main - the main function, prints base 16 numbers.
*
* Return: 0, as required
*/
int main(void)
{
	int d;
	char c;

	for (d = 48; d < 58; d++)
		putchar(d);

	for (c = 'a'; c < 'g'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
