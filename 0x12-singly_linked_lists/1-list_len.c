#include "lists.h"

/**
  * list_len - Returns a number of elements in a linked list_t list
  * @h: const pointer
  * Return: number of linked lists
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
