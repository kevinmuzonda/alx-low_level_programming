#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: number of elements
  * Return: Always(success)
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
