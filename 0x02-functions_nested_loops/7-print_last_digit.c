#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @var: vaiable whose last digit is to be pinted
 * Return: the last digit
 */

int print_last_digit(int var)
{
	int result;

	if (var < 0)
		result = -1 * (var % 10);
	else
		result = var % 10;

	_putchar ((result) + '0');

	return (result);
}

