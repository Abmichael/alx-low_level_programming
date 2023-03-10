#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - returns the minimum number of coins needed to make change
 * for a given amount
 * @amount: int
 * Return: int
 */
int min_coins(int amount)
{
	int i, coins = 0;
	int coin_values[5] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		while (amount >= coin_values[i])
		{
			amount -= coin_values[i];
			coins++;
		}
	}

	return (coins);
}

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int cents, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	result = min_coins(cents);
	printf("%d\n", result);

	return (0);
}
