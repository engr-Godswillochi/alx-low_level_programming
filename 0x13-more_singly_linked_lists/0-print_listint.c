#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements in a linked list
 * @h: the pointer to the start of the list
 *
 * Return: returns counter
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}

