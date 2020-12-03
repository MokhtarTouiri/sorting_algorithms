#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
* bubble_sort - function to sorting array
* @array: Array
* @size: Size
* Return: 0
*/

void bubble_sort(int *array, size_t size)

{
unsigned long int a, b;
unsigned long int tmp;
b = 0;
while (b < size)
{
for (a = 0; a < size - 1; a++)
{
if (array[a] > array[a + 1])
{
tmp = array[a];
array[a] = array[a + 1];
array[a + 1] = tmp;
print_array(array, size);
}
}
b++;
}
}
