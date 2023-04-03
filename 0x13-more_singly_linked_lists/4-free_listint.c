#include "lists.h"

/**
 * free_listint - free a list
 * @head: ...
 *
 * Return: returns nothing
 */


void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
	}
}
