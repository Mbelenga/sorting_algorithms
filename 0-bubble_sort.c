#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in an ascending order
 * @array: to be sorted
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size);
{
	size_t index, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	/* The number of passes required to sort the array */
	for (index = 0; index < size - 1; index++)
	{
		/* Swapped flag */
		swapped = 0;

		for (j = 0; j < size - index - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
			/* The elements are swapped */
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			swapped = 1;
			print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			return;
		}
	}
}
