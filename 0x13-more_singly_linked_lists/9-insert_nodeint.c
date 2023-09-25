#include "lists.h"

/**
 * insert_nodeint_at_index -this will insert a new node in a linked list,
 * at a given position
 * @head: pointer is to be in the first node in the list
 * @idx: index where the new node is to be added
 * @n: data to be inserted in the new node
 *
 * Return: this will return pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (mdx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
