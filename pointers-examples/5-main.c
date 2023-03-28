#include <stdio.h>

/**
 * main - derefencing pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 20;
	p = &n;
	printf("Value of n: %d \n", n);
	printf("Address of n: %p \n", p);

	*p = 206;
	printf("Value of n after change: %d \n", n);
	return (0);
}
