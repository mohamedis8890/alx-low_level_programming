#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the string to search in
 *
 * @accept: the string that has the bytes to search for
 *
 * Return: the number of bytes in the initial segment of @s
 * which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
					res++;
			}
		}
		else
			return (res);
	}

	return (res);
}
