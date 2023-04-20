
/**
 * print_name - prints a name in a format spcified by @f
 *
 * @name: the name to print.
 * @f: a pointer to the formatter function
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
