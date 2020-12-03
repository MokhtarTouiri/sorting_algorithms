#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * @array: ARRAY
 * @size: SIZE
 * Return: 0
 */

void selection_sort(int *array, size_t size)

{
	unsigned long int a, b;
	unsigned long int i, tmp;

	a = 0;

	if (!array)
		return;
	while (a < size - 1)
	{
		i = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[i])
				i = b;
		}
		if (i != a)
		{
			tmp = array[a];
			array[a] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
		a++;
	}
}
