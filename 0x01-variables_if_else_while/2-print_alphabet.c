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
		putchar('\n');
		c = c + 1;
	}
	return (0);
}
