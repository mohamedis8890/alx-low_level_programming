#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: arguments vector size
 * @argv: arguments vector
 *
 * Return: always zero.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
