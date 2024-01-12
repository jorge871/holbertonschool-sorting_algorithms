#include "sort.h"

/**
 * swap - Function to swap two elements of an array.
 * @array: Array.
 * @i: i index.
 * @j: j index.
 * @size: Size of the array.
 * Return: Nothing
*/
void swap(int *array, int i, int j, size_t size)
{
	if (i != j)
	{

		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}

/**
 * pivot - Function that sorts and return the sorted index.
 * @array: Array.
 * @low: Low section of the array to be sorted.
 * @high: High section of the array to be sorted.
 * @size_array: This is size of the array.
 * Return: The index where the array is sorted.
*/

int pivot(int *array, int low, int high, size_t size_array)

{
	int pivot = array[high];

	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j, size_array);
		}
	}

	i++;
	swap(array, i, high, size_array);
	return (i);
}

/**
 * quick_sort_recursive - Recursive quick sort.
 * @array: Array.
 * @low: Low section of the array to be sorted.
 * @high: High section of the array to be sorted.
 * @size_array: This is size of the array
 * Return: Nothing
*/

void quick_sort_recursive(int *array, int low, int high, size_t size_array)
{
	int in;

	if (high <= low || low < 0)
		return;

	in = pivot(array, low, high, size_array);
	quick_sort_recursive(array, low, in - 1, size_array);
	quick_sort_recursive(array, in + 1, high, size_array);
}

/**
 * quick_sort - Sorts an array using quick_sort.
 * @array: Array.
 * @size: Size of the array.
 * Return: Nothing
*/

void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
