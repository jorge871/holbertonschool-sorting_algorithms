#include "sort.h"
/**
 * bubble sort - Function sorting an array of integers in ascending order
 * @array: This is the array this is the array to sort.
 * @size: This is the size of the array.
*/

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    bool swapped;
    
    if (array == NULL || size < 2)
		return;

    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }
    if (swapped == false)
        break;
    } 
} 