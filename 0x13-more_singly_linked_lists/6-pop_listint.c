#include "lists.h"

/**
  * pop_listint - deletes head of a node
  * @head: pointer to head of node
  *
  * Return: returns n
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
