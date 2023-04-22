#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the calc operation based on @s.
 *
 * @s: calculation symbol.
 * Return: a pointer to the operation function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
