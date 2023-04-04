#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Finds the nth node in listint_t list
 * @head: Pointer to first/head of the listint_t linked list
 * @index: Index of the node to returned
 * Return: The nth node of a listint_t linked list,
 * NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int curr = 0;

	if (head == NULL)
		return (NULL);

	for (curr = 0; curr < index; curr++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
