#include "sort.h"
#include <stdio.h>

void swap(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;

	if (node2->next != NULL)
		node2->next->prev = *node1;

	node2->prev = (*node1)->prev;
	node2->next = *node1;

	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;

	(*node1)->prev = node2;
    *node1 = node2->prev;
}

/**
* insertion_sort_list - insertion sorting algorithm
* @list: linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *prev, *temp = NULL;
	head = (*list)->next;

	
	while (head != NULL)
	{
		temp = head->next;
		prev = head->prev;

		while(prev != NULL && head->n < prev->n)
		{
			swap(list, &prev, head);
			print_list(*list);
		}

		head = temp;
	}

			
}
