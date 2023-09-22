#include "sort.h"

/**
* shell_sort - sort a array using shell sort knuth secquence
* @array: an array
* @size: size of the array
* Return: void
*/

void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t i = 0;
	size_t j = 0;
	int temp;
	int x = 0;

	if (array == NULL || size < 2)
		return;

	while (gap < size)
	{
	gap = gap * 3 + 1;
	}

while (gap > 0)
{
	for (i = gap; i < size; i++)
	{
		temp = array[i];
		for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
		{
			array[j] = array[j - gap];
		}
		array[j] = temp;

	}
	gap /= 3;
	if (x == 1)
	print_array(array, size);
	x = 1;
}


}
