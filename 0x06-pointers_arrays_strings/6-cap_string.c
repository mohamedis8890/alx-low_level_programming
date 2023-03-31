#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: the string that will be capitalized
 *
 * Return: the concatenated string
 */
char *cap_string(char *s)
{
	char seps[] = "\t\n ,;:.!?\"(){}";

	int j;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (seps[j] == s[i] && s[i + 1] != 32)
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
		}
	}

	return (s);
}
