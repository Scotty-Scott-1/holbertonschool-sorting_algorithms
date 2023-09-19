#include "sort.h"
#include <stdio.h>
void recursive_f(int *array, int low, int high, size_t size);
int parition(int *array, size_t low, int high);
/**
*quick_sort -sortingwith recursivity
*@array:nb of element
*@size:size of arrey
*Return : void
*/

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high;

	if (array == NULL)
		return;
	if (size < 2)
		return;
high = size - 1;
	recursive_f(array, low, high, size);

}

/**
*recursive_f - recursivity function
*@array:nb of element
*@size:size of arrey
*@low:start the arrey
*@high: end of the arrey
*Return : void
*/

void recursive_f(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = parition(array, low, high);

		if (pivot != high)
		print_array(array, size);

		recursive_f(array, low, pivot - 1, size);
		recursive_f(array, pivot + 1, high, size);
	}

}

/**
*parition - parition function
*@array:nb of element
*@low:start the array
*@high: end of the array
*Return: integer
*/

int parition(int *array, size_t low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = low;
int temp;
int temp2;

	while (j < high - 1)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		j++;
	}

	temp2 = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp2;

	return (i + 1);
}
