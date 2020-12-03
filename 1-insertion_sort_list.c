#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * @list: list
 * Return: 0
 */

void insertion_sort_list(listint_t **list)

{
	listint_t *tmp;

	tmp = 0;

	if (!list)
		return;
	tmp = (*list)->next;
	while (tmp != NULL)
	{
		while (tmp->prev != NULL && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
