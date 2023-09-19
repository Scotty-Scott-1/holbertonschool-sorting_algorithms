#include "sort.h"

/**
*selection_sort - sorting by selection
*@array:array of value
*@size:size of array
*Return: void
*/


void selection_sort(int *array, size_t size)
{
	size_t i, j = 0;
	size_t key = 0;
	int temp = 0;

	if (array == NULL)
		return;
	if (size < 2)
		return;


	for (i = 0; i < size; i++)
	{
		key = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[key])
			{
				key = j;
			}
		}

		if (key != i)
		{
			temp = array[i];
			array[i] = array[key];
			array[key] = temp;
			print_array(array, size);
		}

	}
}
