#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @num: number to be evaluated
 * Return: returns the last digit
 */

int print_last_digit(int num)
{
	if (num >= 0)
	{
	}
	else
	{
		num = num * -1;
	}

	_putchar('0' + (num % 10));

	return (num % 10);

}
