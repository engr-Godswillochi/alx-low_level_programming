#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: pointer to the first element
 *
 * Return: return list_len
 */

size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h != NULL)
	{
		h = h->next;
		list_len++;
	}

	return (list_len);
}
