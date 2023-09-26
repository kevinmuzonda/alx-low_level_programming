#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a linkint_t list
  * @head:  beginning of the list
  * @index:  the node starting at 0
  * Return: Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;

	for (i = 0; i < index && node; i++)
	{
		node = node->next;
	}
	return (node);
}
