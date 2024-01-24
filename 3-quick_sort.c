#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swapArr(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @lo: The starting index of the array partition to order.
 * @hi: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */
void lomuto_sort(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j;

	if (lo < hi)
	{
		pivot = array[hi];
		i = (lo - 1);

		for (j = lo; j < hi; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				swapArr(&array[i], &array[j]);
			}
		}

		swapArr(&array[i + 1], &array[hi]);
		print_array(array, size);

        lomuto_sort(array, lo, i, size);
		lomuto_sort(array, i + 2, hi, size);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	lomuto_sort(array, 0, size - 1, size);
}
