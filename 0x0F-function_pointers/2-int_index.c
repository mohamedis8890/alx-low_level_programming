/**
 * int_index - searches for an integer.
 *
 * @array: the array.
 * @size: @array length
 * @cmp: a pointer to the comparer function
 * Return: index of the integer if found, or -1 if not.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}

	return (-1);
}
