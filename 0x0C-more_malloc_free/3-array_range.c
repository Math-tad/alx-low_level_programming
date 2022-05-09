#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the array created
 */

int *array_range(int min, int max)
{
	int *sps;
	int i, j = 0;
	if (min > max)
		return (NULL);

	sps = malloc((max - min - 1) * sizeof(int));
	if (sps == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		sps[j] = i;
		j++;
	}
	return (sps);
}
