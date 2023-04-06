
#include "main.h"

/**
 * check - checks if a number is in range a to b and eventually 2 to n
 * @a: the start of range
 * @b: the end of range
 * Return:int
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - checks if number is prime
 * @n:the number to check
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
