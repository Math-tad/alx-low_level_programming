#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates a memmory for an array
 * @nmemb: number of elements of the array
 * @size: size of each elements of the array
 * Return: pointer to the memory space for the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *sps;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sps = malloc(nmemb * size + 1);
	if (sps == NULL)
		return (NULL);

	return (sps);
}
