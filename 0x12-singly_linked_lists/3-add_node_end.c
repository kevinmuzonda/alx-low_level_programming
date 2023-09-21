#include "lists.h"

/**
 * add_node_end - add node to the end of linkedlist
 * @head: first node
 * @str: store a string value
 * Return: address latest of node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *name, *ptr;
	unsigned int len = 0;

	name = malloc(sizeof(list_t));
	if (name)
	{
		while (*(str + len))
			len++;
		name->str = strdup(str);
		if (name->str)
		{
			name->len = len;
			name->next = NULL;
			if (!*head)
			{
				*head = name;
				return (name);
			}
			ptr = *head;
			while (ptr->next)
				ptr = ptr->next;
			ptr->next = name;
			return (name);
		}
		free(name);
		return (NULL);
	}
	return (NULL);
}
