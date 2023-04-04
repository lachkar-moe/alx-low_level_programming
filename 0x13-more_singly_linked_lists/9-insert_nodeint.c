#include "lists.h"
#include <srdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint_t linked list
 * @idx: the index of the list where the new node should be added
 * @n: element/property n of the node to be added
 * Return: address of the new element (SUCCESS), or
 * NULL if it failed (FAILURE), or
 * NULL if is not possible to add the new node at index @idx
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *created_node, *tempo;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
	tempo = *head;
	for (; i < idx - 1 && tempo != NULL; i++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (NULL);
	}

	created_node->n = n;
	if (idx == 0)
	{
		created_node->next = *head;
		*head = created_node;
		return (created_node);
	}

	created_node->next = tempo->next;
	tempo->next = created_node;
	return (created_node);
}
