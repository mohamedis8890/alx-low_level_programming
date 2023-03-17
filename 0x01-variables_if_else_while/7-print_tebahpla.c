#include <stdio.h>
/**
* main - the main function, print alphabet back to front
*
* Return: 0, as required
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
