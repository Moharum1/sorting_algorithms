#include "sort.h"

/**
  * bubble_sort - A function for bubble sorting.
  * @array: The array to sort.
  * @size: THe length of the aaray.
  * Return: Nothing.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool isSorted;
	int temp;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i <= (size - 1); i++)
	{
		isSorted = true;

		for (j = 0; j <= (size - 2); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);

				isSorted = false;
			}
		}

		if (isSorted)
			return;
	}
}
