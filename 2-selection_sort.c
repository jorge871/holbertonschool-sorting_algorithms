#include "sort.h"
/**
 * selection_sort - Function that sorts
 * an array of integers in ascending order.
 * @array: This is the array this is the array to sort.
 * @size: This is the size of the array.
*/

void selection_sort(int *array, size_t size)
{
	size_t  sel = 0, i = 0, j, aux = 0;

	if (array == NULL)
		return;

	for (; i < (size - 1); i++)
	{
		sel = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[sel])
			{
				sel = j;
			}
		}
		if (sel != i)
		{
			aux = array[i];
			array[i] = array[sel];
			array[sel] = aux;
			print_array(array, size);
		}
		else
		{
			continue;
		}
	}
}
