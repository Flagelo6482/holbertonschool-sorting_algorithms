#include "sort.h"

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void quicksort(int array[], int len)
{
	quicksort_recursion(array, 0, len - 1);
}

void quicksort_recursion(int array[], int low, int high)
{
	if (low < high)
	{
		int pivot = partition(array, low, high);
		quicksort_recursion(array, low, pivot - 1);
		quicksort_recursion(array, pivot + 1, high);
	}
}

int partition(int array[], in low, int high)
{
	int pivot_value = array[high];
	int i = low;

	for (int j = low; k < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);

	return (i);
}
