/**
 * swap_int - swaps the values of two integers.
 *
 * @a: the first integer to swap
 * @b: the second integer to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
