#include <stdio.h>
#include <stdlib.h>

/**
 * printCodes - prints the codes.
 *
 * @code: the address of the main function converted to string
 * @n: number of codes to print
 * Return: void.
 */
void printCodes(char *code, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", code[i]);
		if (i < (n - 1))
			printf(" ");
	}

	printf("\n");
}

/**
 * main - the main program, prints opcodes of itself.
 *
 * @argc: number of args.
 * @argv: args vector.
 * Return: 0 if no error, 1 if args number incorrect, and
 * 2 if codes number incorrect.
 */
int main(int argc, char **argv)
{
	int n;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	printCodes((char *)&main, n);

	return (0);
}
