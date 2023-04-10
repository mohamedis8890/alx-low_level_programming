#include <stdio.h>
#include "main.h"
/**
  * main - prints the arguments passed to the program
  * followed by a new line.
  *
  * @argc: size of argumnets vector
  * @argv: the argument vector
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

