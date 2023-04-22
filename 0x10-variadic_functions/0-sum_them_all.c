#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its params
 *
 * @n: number of parameters.
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list nums;

	va_start(nums, n);

	for (; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
