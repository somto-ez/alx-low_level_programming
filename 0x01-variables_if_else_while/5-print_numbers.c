#include <stdio.h>

/**
 * main - prints all single digits of base 10 numbers starting from 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9' ; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
