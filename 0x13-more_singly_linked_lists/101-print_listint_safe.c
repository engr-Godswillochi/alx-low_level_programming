#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t count = 0;
	int diff;

	while (head != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		node = head;
		head = head->next;
		diff = head - node;
		if (diff <= 0)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (count);
}

