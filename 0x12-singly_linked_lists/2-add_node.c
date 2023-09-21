#include "lists.h"

/**
 * add_node - adds a node to the begin'g of linkedlist
 * @head: first node
 * @str: stores  string values
 * Return: address of the latest added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *name;

	name = malloc(sizeof(list_t));

	if (name != NULL)
	{
		name->str = strdup(str);
		name->len = strlen(str);
		name->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		name->next = *head;
	*head = name;
	return (name);
}
