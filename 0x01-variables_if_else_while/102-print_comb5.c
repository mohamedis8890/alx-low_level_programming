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
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(32);

			for (k = 48; k < 58; k++)
			{
				for (l = k + 1; l < 58; l++)
				{
					putchar(k);
					putchar(l);
					if (j < 58)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
