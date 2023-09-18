#include "sort.h"
/**
 *insertion_sort_list -sorted the list
 * @list:linked list
 *Return:void
 */
void insertion_sort_list(listint_t **list)
{

	listint_t *key = (*list)->next;
	listint_t *insert = NULL;
	listint_t *temp = NULL;

	if (*list == NULL || (*list)->next == NULL)
		return;

	while (key != NULL)
	{
		insert = key->prev;
		temp = key;

		while (insert != NULL && insert->n > temp->n)
		{
			temp->prev = insert->prev;
			insert->prev = temp;
			if (temp->prev != NULL)
			{
				temp->prev->next = temp;
			}
			insert->next = temp->next;
			temp->next = insert;

			if (insert->next != NULL)
			{
				insert->next->prev = insert;
			}
			if (insert == *list)
			{
				*list = temp;
			}
			insert = temp->prev;
			print_list(*list);
		}
		key = key->next;
	}
}
