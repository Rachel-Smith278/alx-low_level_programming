#include "lists.h"

/**
 * listint_len - This will return the number of elements in a linked lists
 * @h: link list of type listint_t to traverse
 *
 * Return: This return the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (x)
	{
		num++;
		x = x->next;
	}

	return (num);
}
