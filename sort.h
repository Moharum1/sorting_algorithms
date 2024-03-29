#ifndef __MAIN__
#define __MAIN__

#include <stdbool.h>
#include <stddef.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);
void swap(listint_t **head, listint_t **node1, listint_t *node2);

void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void Lomuto_part(int *array, int lo, int hi, size_t size);
void swapArr(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);

void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
#endif
