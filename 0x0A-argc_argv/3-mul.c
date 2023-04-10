#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/**
  * main -  multiplies two numbers.
  *
  * @argc: size of argumnets vector
  * @argv: the argument vector
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

