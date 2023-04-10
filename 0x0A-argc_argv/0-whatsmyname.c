#include <stdio.h>
#include "main.h"
/**
  * main - prints the name of the program followed by a new line.
  *
  * @argc: size of argumnets vector
  * @argv: the argument vector
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
