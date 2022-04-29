#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: argument counter
 * @argv: pointer to the array of argument
 * Return: 0 for success 1 for an error
 */

int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int sum = 0;
	int rem = 0;
	int que = 0;
	int i = 0, tmp;

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	if (argc == 2)
	{
		que = atoi(argv[1]) / 25;
		rem = atoi(argv[1]) % 25;
		sum += que;

		while (i < 5)
		{
			i++;
			tmp = rem;
			rem = tmp % cents[i];
			que = tmp / cents[i];
			sum += que;
		}

		printf("%d\n", sum);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
