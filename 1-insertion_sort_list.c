#include "sort.h"
/**
 * insertion_sort_list - Function that sorts a doubly
 * linked list of integers in ascending order.
 * @array: This is the array this is the array to sort.
 * @size: This is the size of the array.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
			return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		listint_t *key = curr;
		listint_t *prev = curr->prev;

		while (prev != NULL && prev->n > key->n)
		{
			prev->next = key->next;
			if (key->next != NULL)
					key->next->prev = prev;

			key->prev = prev->prev;
			key->next = prev;

			if (prev->prev != NULL)
					prev->prev->next = key;
			else
				*list = key;

			prev->prev = key;
			prev = key->prev;

			print_list(*list);
		}
		curr = curr->next;
	}
}