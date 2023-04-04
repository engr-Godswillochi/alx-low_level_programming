#include "lists.h"


/**
  * sum_listint - sum all the data in a list
  * @head: pointer to the head node
  *
  * Return: return total
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head)
	{
		while (head)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
