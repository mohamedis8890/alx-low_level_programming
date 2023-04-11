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
	int *err;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		n = strtol(argv[argc], &err, 10);
		if (*err)
		{
			printf("Error\n");
			return (1);
		}

		else
			sum += n;

	}

	printf("%d\n", sum);
	return (0);
}

