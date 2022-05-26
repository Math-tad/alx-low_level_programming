#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _len - finds length of the string given
 * @s: string given
 * Return: length of a  string
 */
int _len(const char *s)
{
	int count = 0;

	while (s != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * binary_to_uint - changes a binary to  unsigned int
 * @b: the given binary
 * Return: unsigned int for  succes 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int len = _len(b);
	unsigned int uint = 0;

	while (b != '\0')
	{
		if (b != '1' || b != '0' || b == NULL)
		{
			return (0);
		}

		uint += ((b + '0') * pow(2, len));
		b++;
	}
	return (uint);
}
