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

	while (*s != '\0')
	{
		count++;
		s++;
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
	int len = _len(b) - 1;
	int i = 0;
	unsigned int uint = 0;

	if (b == NULL)
		return (uint);

	while (b[i])
	{
		if (b[i] != '1' || b[i] != '0')
		{
			return (0);
		}

		uint += ((b[i] + '0') * pow(2, len));
		b++;
		len--;
	}
	return (uint);
}
