#include "main.h"
/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: arguments vector size
 * @argv: arguments vector
 *
 * Return: always zero.
 */
int main(int argc, char *argv[])
{
	int amount;
	int coins = 0;

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

	if (amount >= 25)
	{
		coins += amount / 25;
		amount = amount % 25;
	}

	if (amount >= 10)
	{
		coins += amount / 10;
		amount = amount % 10;
	}

	if (amount >= 5)
	{
		coins += amount / 5;
		amount = amount % 5;
	}

	if (amount >= 2)
	{
		coins += amount / 2;
		amount = amount % 2;
	}

	printf("%d\n", coins + amount);

	return (0);
}
