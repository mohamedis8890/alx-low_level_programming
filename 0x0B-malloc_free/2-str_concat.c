#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to the concatenated string folowed by the null character.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (*(s1 + len1) != '\0')
			len1++;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (*(s2 + len2) != '\0')
			len2++;
	}

	conc = (char *)malloc((sizeof(char) * (len1 + len2)) + 1);
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(conc + i) = *(s1 + i);

	for (; i < (len1 + len2); i++)
		*(conc + i) = *(s2 - len1 + i);

	*(conc + i) = '\0';

	return (conc);
}
