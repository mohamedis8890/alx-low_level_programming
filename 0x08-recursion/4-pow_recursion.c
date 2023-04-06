#include "main.h"
/**
 * _pow_recursion - calculates a specific power of a number.
 * @x: the number to calculate power
 * @y: the power
 *
 * Return: the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
