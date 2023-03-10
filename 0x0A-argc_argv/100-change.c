#include "main.h"

/**
 * main - program that print the minimum
 * of coins to make change an amount of money
 * @argc: the number of arg
 * @argv: the name of all arg
 * Return: 1 if the arg is not 1 and 0 else
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
		printf("0\n");
	else
	{
		while (amount > 0)
		{
			if (amount >= 25)
				amount -= 25;
			else if (amount >= 10)
				amount -= 10;
			else if (amount >= 5)
				amount -= 5;
			else if (amount >= 2)
				amount -= 2;
			else if (amount >= 1)
				amount -= 1;
			coins += 1;
		}
		printf("%d\n", coins);
	}

	return (0);
}
