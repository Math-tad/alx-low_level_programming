#include "main.h"
#include <stdio.h>

/**
 * infinite_add - sum up two numbers
 * @n1: number1
 * @n2: number2
 * @r: stores the result
 * @size_r: buffer size
 * Return: changed string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r = n1 + n2;
	if ((size_r + 1) >= sizeof(r))
	{
		return (r);
	}
	else
		return (0)
}
