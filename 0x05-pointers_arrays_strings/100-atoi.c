#include "main.h"
#include <stdio.h>

/**
 * signs - determines the sign of the number
 * @s: the character to be determined
 * Return: the sign
 */

int signs(char *s)
{
	int sign = 0;

	while ((*s != '0') && !(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
		{
			sign++;
		}
		s++;
	}
	if ((sign % 2) != 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

/**
 * _atoi - change character into int
 * @s: character to be changed
 * Return: an int
 */

int _atoi(char *s)
{
	int prod = 1;
	int fnum = 0;
	int num;
	int leng = 0;
	int ss = signs(s);

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	while (leng > 0)
	{
		if (fnum > 0 && !(*s >= '0' && *s <= '9'))
		{
			break;
		}
		if (*s >= '0' && *s <= '9')
		{
			num = *s - '0';
			fnum += (num * prod);
			prod *= 10;
		}
		leng--;
		s--;
	}
	fnum *= ss;

	return (fnum);
}
