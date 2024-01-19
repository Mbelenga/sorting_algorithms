#include "sort.h"
/**
 * bubble_sort - function that sorts an array using
 * bubble sort algorithm
 * @array: the pointer to the array being sorted
 * @size: the size of the array
 * Return: the sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, index, temp;

	if (array == NULL || size < 2)
		return;

	for (index = 0; index < size - 1; index++)
	{
		for (j = 0; j < size - index - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
