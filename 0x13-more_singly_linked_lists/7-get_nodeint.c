#include "lists.h"

/**
 * get_nodeint_at_index - This will return the node at a certain index in a linked list
 * @head: This is the first node in the linked list
 * @index: Index of the node to be returned
 *
 * Return: This points to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *temp = head;

	while (temp && f < index)
	{
		temp = temp->next;
		f++;
	}

	return (temp ? temp : NULL);
}
