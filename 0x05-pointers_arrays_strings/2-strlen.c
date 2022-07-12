#include <stdio.h>
#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
{
	s++;
	len++;
}

		return (len);
}
