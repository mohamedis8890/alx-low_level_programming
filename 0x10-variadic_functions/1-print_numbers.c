#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of parameters
 * @...: the numbers to sum
 *
 * Return: the sum of all the parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int i = (int)n;

	va_start(numbers, n);

	while (i--)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i != 0)
			printf("%s", separator);
	}

	printf("\n");
}
