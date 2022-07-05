#include "main.h"

/**
 * main - prints alphabet in lowe case followed by new line
 * Return: void
 */

void print_alphabet(void)
{
	int ii;

	for (ii = 'a'; ii <= 'z'; ii++)
		_putchar(ii);
	_putchar('\n');
}
