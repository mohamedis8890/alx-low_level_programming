#include <stdio.h>
/**
 * main - the main function, prints the sizes of different
 * data types on this computer
 *
 * Return: 0, as required
 */

int main(void)
{
	char c;
	unsigned int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));

	return (0);
}
