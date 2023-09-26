#include "lists.h"

/**
  * pop_listint - deletes the head of a node listint_t
  * @head: the node to be deleted
  * Return: heads node data
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	headnode = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (headnode);
}
