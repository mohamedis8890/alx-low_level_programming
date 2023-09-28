#include "main.h"

/**
 * trial -  determines if @n is a prime number.
 * @n: the number.
 * @i: an divisor from @n down to 1.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int trial(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (trial(n, i - 1));
	}
}

/**
 * is_prime_number -  determines if @n is a prime number.
 * @n: the number.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	return (trial(n, n - 1));
}
