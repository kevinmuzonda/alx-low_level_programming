#include "lists.h"

/**
  * reverse_listint - prints a reverse listint_t linked list
  * @head: the start of the linked listint
  * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *nod;

	node = NULL;
	nod = NULL;

	while (*head)
	{
		nod = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = nod;
	}
	*head = node;
	return (*head);
}
