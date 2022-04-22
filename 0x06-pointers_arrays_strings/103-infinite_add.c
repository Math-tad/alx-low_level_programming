#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - length of a string
 * @s: string
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_str - reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */

char *rev_str(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}

	return (s);
}

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
