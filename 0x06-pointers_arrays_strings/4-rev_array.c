#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: a pointer to the array to be reversed
 * @n: size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int mid = n % 2 == 0 ? (n / 2) - 1 : (n - 1) / 2;
	int swap;
	int i;

	for (i = n - 1; i > mid; i--)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}
