#include "lists.h"

/**
 * add_nodeint - This will add  a new node at the beginning of a linked list
 * @head: This points to the first node in the list
 * @n: The data is to be inserted in that new node
 *
 * Return: This points to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
