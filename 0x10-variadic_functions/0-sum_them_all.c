#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 *
 * Return: the sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = (int)n;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	while (i--)
	{
		sum += va_arg(nums, int);
	}

	return (sum);
}
