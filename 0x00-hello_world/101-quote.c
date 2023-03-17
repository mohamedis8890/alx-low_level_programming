#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function, prints to stderr
 *
 * Return: 1, we need to write to stderr
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	perror(q);
	exit(-1);

	return (1);
}
