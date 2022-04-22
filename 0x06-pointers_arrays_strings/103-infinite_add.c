#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	long long int num1 = atoi(n1);
	long long int num2 = atoi(n2);

	int sum = num1 + num2;

	int i;

	if ((size_r + 1) >= sizeof(r))
	{
		while (i < sizeof(sum))
		{
			r[i] = sum % 10;
			sum /= 10;
			i++;
		}
		r = rev_str(r);
		return (r);
	}
	else
		return (0);
}
