#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring @needle
 * in the string @haystack. The terminating null bytes (\0) are
 * not compared.
 *
 * @haystack: the string to search in
 *
 * @needle: the string to be located
 *
 * Return: a pointer to the the beginning of the located
 * substring, or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
