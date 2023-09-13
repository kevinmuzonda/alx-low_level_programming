#include "function_pointers.h"

/**
  * array_iterator -  function with elements of an array
  * @size: the size of the array
  * @array: array entry point
  * @action: a pointer to a function
  * Return: Always(success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
