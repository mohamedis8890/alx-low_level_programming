#include <stdio.h>
/**
* main - the main function, prints alphabet lower- and upper case
*
* Return: 0, as required
*/
int main(void)
{
	char c1 = 'a';
	char c2 = 'A';

	while (c1 <= 'z')
	{
		putchar(c1);
		c1 = c1 + 1;
	}

	while (c2 <= 'Z')
	{
		putchar(c2);
		c2 = c2 + 1;
	}
	putchar('\n');

	return (0);
}
