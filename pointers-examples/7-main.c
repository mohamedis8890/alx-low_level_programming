#include <stdio.h>
/**
 * modif_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void modif_my_param(int *m)
{
	printf("Address and value of m: %p, %p \n", &m, m);
	*m = 402;
}

/**
 * main - derefencing pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 20;

	printf("Value of n before change: %d \n", n);
	modif_my_param(&n);
	printf("Value of n after change: %d \n", n);

	return (0);
}
