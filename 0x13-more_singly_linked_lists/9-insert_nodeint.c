#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to pointer of first node.
 * @index: Index of the list where the new node should be added.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (*head == NULL && index != 0)
		return (NULL);

	current = *head;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (count < index - 1 || (count == 0 && index > 0))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (index == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node;
	}

	return (new_node);
}

