#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest;
    int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallest])
				smallest = j;
		}

		temp = array[smallest];
		array[smallest] = array[i];
		array[i] = temp;

		print_array(array, size);
	}

}
