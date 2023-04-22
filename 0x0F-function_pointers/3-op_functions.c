#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds 2 ints.
 *
 * @a: the first int.
 * @b: the second int.
 * Return: a+b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 ints.
 *
 * @a: the first int.
 * @b: the second int.
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 ints.
 *
 * @a: the first int.
 * @b: the second int.
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 ints.
 *
 * @a: the first int.
 * @b: the second int.
 * Return: a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets the modulo of 2 ints.
 *
 * @a: the first int.
 * @b: the second int.
 * Return: a modulo b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
