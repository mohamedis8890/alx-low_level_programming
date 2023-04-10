#include <stdio.h>
#include "main.h"
/**
  * main - prints all arguments it receives.
  *
  * @argc: size of argumnets vector
  * @argv: the argument vector
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}

