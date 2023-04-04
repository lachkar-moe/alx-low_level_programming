#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *created_node, *temporary;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temporary = *head;
	for (; i < idx - 1 && temporary != NULL; i++)
		temporary = temporary->next;
	if (temporary == NULL)
		return (NULL);
	}
	created_node = malloc(sizeof(listint_t));
	if (created_node == NULL)
		return (NULL);
	created_node->n = n;
	if (idx == 0)
	{
		created_node->next = *head;
		*head = created_node;
		return (created_node);
	}
	created_node->next = temporary->next;
	temporary->next = created_node;
	return (created_node);
}
