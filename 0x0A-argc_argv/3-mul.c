#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: arr args
 * @argc: n args
 * Return: 0
 * or 1 if error
 */

int main(int argc, char *argv[])
{
	int i, val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		val *= atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}
