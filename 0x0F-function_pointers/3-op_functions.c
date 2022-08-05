#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: sum1
 * @b: sum2
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: sub1
 * @b: sub2
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - division
 * @a: div1
 * @b: div2
 * Return: result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo
 * @a: mod1
 * @b: mod2
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}

