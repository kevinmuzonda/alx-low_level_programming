#include "lists.h"

/**
  * add_nodeint_end - add a node at the end of the list
  * @head: header, first element
  * @n: int to add
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
			temp->next = node;
	}
	return (node);
}
