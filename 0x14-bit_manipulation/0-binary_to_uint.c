#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * 100010101
 * Return: the number converted.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);

		/* Create a new place for the next bit*/
		n = n << 1;

		/* *b != '0' returns 1 or 0 based on the value of *b.*/
		/* n |= *b... adds 1 or 0 to the beginning of n by*/
		/* comparing n to 0000 0001 or 0000 0000*/
		n |= *b != '0';
		b++;
	}

	return (n);
}
