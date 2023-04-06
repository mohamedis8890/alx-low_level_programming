#include "main.h"

/**
 * check - checks if a sqrt is in range a to b and eventually 1 to n,
 * tat is a naive approach to solve the problem.
 * @a: the start of range
 * @b: the end of range
 *
 * Return: natural square root of a number or -1.
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - calculates the square root of a number.
 * @n: the input number
 *
 * Return: natural square root of a number or -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
