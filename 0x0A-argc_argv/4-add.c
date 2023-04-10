#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/**
  * main - adds positive numbers.
  *
  * @argc: size of argumnets vector
  * @argv: the argument vector
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	int sum;
	int n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		n = atoi(argv[argc]);
		if (*argv[argc] >= 48 && *argv[argc] <= 57)
			sum += n;
		else
		{
			printf("Error\n");
			return (0);
		}
	}

	printf("%d\n", sum);
	return (0);
}

