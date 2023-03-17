#include <stdio.h>
/**
* main - the main function, prints two-digit combinations
*
* Return: 0, as required
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
