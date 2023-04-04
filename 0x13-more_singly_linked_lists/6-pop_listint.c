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
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;

	*head = (*head)->next;

	free(temp);

	return (data);
}
