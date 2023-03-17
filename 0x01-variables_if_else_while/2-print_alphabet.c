#include <stdio.h>
/**
* main - the main function, prints the alphabet
*
* Return: 0, as required
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
