#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: list of number to order
 * @size: Lenght of array
 *
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	int i = 0, j = 0, tmp = 0, min = i;

	if (array == NULL || size < 2)
		return;

	for (; j < (int)size; j++)
	{
		if (j < (int)size)
		{
			if (array[j] < array[min])
				min = j;
		}


		if (j == (int)size - 1)
		{
			if (i != min)
			{
				tmp = array[i];
				array[i] = array[min];
				array[min] = tmp;
				print_array(array, size);
			}
			i = i + 1;
			j = i - 1;
			min = i;
			if (i == (int)size - 2)
				break;
		}

	}

}
