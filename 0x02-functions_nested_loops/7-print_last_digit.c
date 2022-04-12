#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @num: number to be evaluated
 * Return: returns the last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;

	_putchar((num % 10) + '0');

	return (num % 10);

}
