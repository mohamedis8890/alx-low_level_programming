#include <stdio.h>
/**
* main - the main function, prints number combinations
*
* Return: 0, as required
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}

	putchar('\n');

	return (0);
}
