#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm
 *@array: Pointer to array
 *@size: Array length
 *
 *Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t tmp, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
