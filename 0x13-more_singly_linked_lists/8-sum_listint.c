#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of listint_t
  * @head: start of the list
  * Return: turn 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
