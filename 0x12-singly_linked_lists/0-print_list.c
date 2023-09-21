#include "lists.h"

/**
  * print_list - prints all elements of a list_t list
  * @h: the lists 
  *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a;
	
	for (a = 0; h != NULL; h = h -> next, a++)
	{
		
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h -> len, h -> str);
		}
	}
	return (a);
}
