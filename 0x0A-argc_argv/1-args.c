#include "main.h"
/**
 * main - prints the number of arguments passed into it,
 * followed by a new line.
 * @argc: arguments vector size
 * @argv: arguments vector
 *
 * Return: always zero.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
