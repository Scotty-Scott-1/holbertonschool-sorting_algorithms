#include "sort.h"
/**
 *insertion_sort_list -sorted the list
 * @list:linked list
 *Return:void
 */
void insertion_sort_list(listint_t **list)
{

	listint_t *key;
	listint_t *prev;
	listint_t *temp;


	if (list == NULL)
		return;
	if (*list == NULL)
		return;
	if ((*list)->next == NULL)
		return;

	key = (*list)->next;

	while (key != NULL)
	{
		prev = key->prev;
		temp = key;

		while (prev != NULL && prev->n > temp->n)
		{
			prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = prev;

			temp->prev = prev->prev;
			temp->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = temp;
			else
				*list = temp;
			prev->prev = temp;
			prev = temp->prev;
			print_list(*list);
		}
		key = key->next;
	}
}
