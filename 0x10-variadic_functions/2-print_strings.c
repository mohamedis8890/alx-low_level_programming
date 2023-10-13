#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between strings
 * @n: the number of parameters
 * @...: the strings to print
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = (int)n;
	va_list strings;
	char *string;

	va_start(strings, n);
	while (i--)
	{
		string = va_arg(strings, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");

		if (separator != NULL && i != 0)
			printf("%s", separator);
	}

	printf("\n");
}
