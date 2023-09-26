#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node  at any given position
  * @head: the start of a linked listint_t
  * @idx: index list where new node should be
  * @n: integer values
  * Return: the address of a new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;
	unsigned int i;

	temp = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL || idx == 0)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (idx == 0)
		{
			node->next = temp;
			temp->next = node;
			return (node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
