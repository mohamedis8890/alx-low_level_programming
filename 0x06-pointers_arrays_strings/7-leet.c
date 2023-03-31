#include "main.h"
/**
 * leet - encodes a string into 1337.
 *
 * @s: the string that will be leeted
 *
 * Return: the leeted string
 */
char *leet(char *s)
{
	char letters[] = "aeotlAEOTL";
	char leets[] = "4307143071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 11; j++)
			if (s[i] == letters[j])
				s[i] = leets[j];
	}

	return (s);
}
