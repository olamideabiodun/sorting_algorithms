#include "sort.h"

/**
 * swap_list - swap node in a doubly linked list
 * @h: a pointer to the head of the list
 * @n1: first node to swap
 * @n2: second node to swap
 **/
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - sorts doubly linked list with insertion sort
 * @list: list to sort
**/
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *run, *tmp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;
    for (current = (*list)->next; current != NULL; current = tmp)
	{
		tmp = current->next;
		run = current->prev;
		while (run != NULL && current->n < run->n)
		{
			swap_nodes(list, &run, current);
			print_list((const listint_t *)*list);
		}
	}
}
