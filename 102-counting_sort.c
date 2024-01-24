#include "sort.h"
#include <stdlib.h>
/**
 * counting_sort - Sort an array of integers in ascending order
 *                 using the counting sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setting it up.
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int max, count;
	int *countArray, *newArr;

	if (array == NULL || size < 2)
		return;
	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	max = max + 1;
	countArray = malloc(max * sizeof(int));
	if (countArray == NULL)
		return;
	for (i = 0; i < (size_t)max; i++)
		*(countArray + i) = 0;
	*(countArray + max + 1) = '\0';

	for (i = 0; i < size; i++)
		*(countArray + array[i]) += 1;

	count = 0;
	for (i = 0; i < (size_t)max; i++)
	{
		count += countArray[i];
		countArray[i] = count;
	}
	print_array(countArray, max);

	newArr = malloc(size * sizeof(int));
	if (newArr == NULL)
		return;
	newArr[size + 1] = '\0';
	for (i = 0; i < size; i++)
		newArr[countArray[array[i] - 1]] = array[i];
	for (i = 0; i < size; i++)
		array[i] = newArr[i];
	free(countArray);
	free(newArr);
}
