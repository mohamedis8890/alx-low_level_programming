/**
 * _strlen - returns the length of a string.
 *
 * @s: a reference to the string
 * Return: the length as integer.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count)
		;

	return (count);
}
