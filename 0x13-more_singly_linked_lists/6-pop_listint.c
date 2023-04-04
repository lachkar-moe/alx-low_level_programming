#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head of a listint_t list
 * and return the head node's data
 * @head: Double pointer the head node
 * Return: The head node data n, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;

	*head = temp->next;

	free(temp);

	return (n);
}