#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	int mid;

	if (a > b)
		mid = a;
	else
		mid = b;

	if (mid > c)
		largest = mid;
	else
		largest = c;

	return (largest);
}
