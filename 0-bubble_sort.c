#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
* bubble_sort - function to sorting array
* @array: Array
* @size: Size
* Return: 0
*/

void bubble_sort(int *array, size_t size)

{
size_t i, j;
size_t temp;
i = 0;
j = 0;
while (j < size)
{
while(i < size - 1)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
i++;
}
j++
}
}
