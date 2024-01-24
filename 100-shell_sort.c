#include "sort.h"


/**
 * shell_sort - Shell sort - Knuth Sequence
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t n, i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	n = 1;
	while (n < size)
		n = n * 3 + 1;

	for (n = (n - 1) / 3; n >= 1; n = (n - 1) / 3)
	{
		for (i = n; i < size; i++)
		{
			tmp = array[i];

			for (j = i; j >= n && array[j - n] > tmp; j -= n)
				array[j] = array[j - n];

			array[j] = tmp;
		}
		print_array(array, size);
	}
}
