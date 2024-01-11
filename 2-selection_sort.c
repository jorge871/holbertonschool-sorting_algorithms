#include "sort.h"
/**
 * selection_sort - Function that sorts
 * an array of integers in ascending order.
 * @array: This is the array this is the array to sort.
 * @size: This is the size of the array.
*/

void selection_sort(int *array, size_t size)
{
	size_t sel, i, j;
	int aux = 0;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		sel = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[sel])
				sel = j;

		if (sel != j)
		{
			aux = array[i];
			array[i] = array[sel];
			array[sel] = aux;
			print_array(array, size);
		}

	}
}
