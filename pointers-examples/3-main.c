#include <stdio.h>
/**
 * main - Prints address and size of a pointer to integer
 *
 * Return: 0
 */
int main(void)
{
	int *p;

	printf("Size of p pointer is: %lu\n", sizeof(p));
	printf("Address of pointer p is: %p \n", &p);

	return (0);
}
