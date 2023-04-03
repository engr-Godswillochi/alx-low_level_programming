#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to null
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
