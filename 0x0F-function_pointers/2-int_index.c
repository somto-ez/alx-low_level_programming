#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array - array of elements
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if no element matches and  size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

