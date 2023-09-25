#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: the lists
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; h = h->next, a++)
	{
		printf("%d\n", h->n);
	}
	return (a);
}
