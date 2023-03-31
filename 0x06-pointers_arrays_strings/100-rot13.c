#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 *
 * @s: the string that will encoded.
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i = 0, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; j < 53; j++)
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}

		i++;
	}

	return (s);
}
