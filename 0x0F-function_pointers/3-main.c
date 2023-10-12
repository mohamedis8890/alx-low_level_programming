#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main program, prints the result of simple calculations.
 *
 * @argc: number of args.
 * @argv: args vector.
 * Return: 0 if no error, 98 if args number incorrect, and
 * 99 if operation incorrect.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *operator;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	calc = get_op_func(operator);

	if (!calc)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", calc(num1, num2));

	return (0);
}
