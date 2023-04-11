#include <stdio.h>
#include <stdlib.h>

#include "main.h"

void change(int *amount, int *count, int coin);

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 *
 * @argc: size of argumnets vector
 * @argv: the argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int amount = 0, count = 0, i;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amount)
	{
		for (i = 0; i < 5; i++)
			change(&amount, &count, coins[i]);

		if (amount == 1)
		{
			count += amount;
			amount = 0;
		}
	}

	printf("%d\n", count);

	return (0);
}

void change(int *amount, int *count, int coin)
{
	if (*amount >= coin)
	{
		*count += *amount / coin;
		*amount = *amount % coin;
	}
}
