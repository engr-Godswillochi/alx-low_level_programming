#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at a given position
  * @head: pointer to head node
  * @index: index of node to be deleted
  *
  * Return: ...
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (counter == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		counter++;
	}

	return (-1);
}
