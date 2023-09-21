#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: first node
 * Return: N/A | vide
 */
void free_list(list_t *head)
{
	list_t *singly;

	if (head != NULL)
	{
		while (head != NULL)
		{
			singly = head;
			head = head->next;
			free(singly->str);
			free(singly);
		}
	}
}
