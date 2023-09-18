#include "sort.h"
/**
 *bubble_sort - sort the list by pair of elements
 * @array:array of element
 * @size:size of the array
 *Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int tmp = 0;

	for(i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}