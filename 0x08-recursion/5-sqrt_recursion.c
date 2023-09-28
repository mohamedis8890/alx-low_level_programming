#include "main.h"

/**
 * squareroot -  a helper function that calculates the square root of @n
 * using the 'Repeated Subtraction Method'
 * @n: the number.
 * @i: the odd number to be subtracted form @n at each frame.
 * @c: a counter for subtraction operations, the final answer according
 * to the method.
 *
 * Return: the square root of @n.
 */
int squareroot(int n, int i, int c)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (c);
	}

	return (squareroot(n - i, i + 2, c + 1));
}

/**
 * _sqrt_recursion -  returns the square root of any number @n.
 * @n: the number.
 *
 * Return: the square root of @n.
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1, 0));
}
