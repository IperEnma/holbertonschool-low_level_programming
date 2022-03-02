#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: size of the argv array
 * @argv: An array of size argc
 * Return: number of coins
 */
int main(int argc, char *argv[])
{
	int i, cents, change, change2, res, j = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		for (i = 0; coins[i]; i++)
		{
			if (cents >= coins[i])
			{
				change = cents / coins[i];
					if (cents % coins[i] != 0)
					{
						change = change + (cents % coins[i]);
					}
					break;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("%d\n", change);
		return (0);
	}
}
