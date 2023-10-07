#include "main.h"
/**
 * main - adds positive numbers.
 * @argc: arguments vector size
 * @argv: arguments vector
 *
 * Return: always zero.
 */
int main(int argc, char *argv[])
{
	int sum = 0, current;
	char *str;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		current = strtol(argv[argc], &str, 10);
		if (*str)
		{
			printf("Error\n");
			return (1);
		}

		sum += current;
	}

	printf("%d\n", sum);

	return (0);
}
