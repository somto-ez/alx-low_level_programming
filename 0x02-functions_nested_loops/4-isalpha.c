#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: chaacter to be checked
 * Return: 1 if c is a letter, and 0 othewise
 */

int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}
